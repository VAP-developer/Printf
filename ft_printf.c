/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vicalons <vicalons@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/19 13:49:39 by vicalons          #+#    #+#             */
/*   Updated: 2024/11/20 11:34:15 by vicalons         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

size_t	ft_printspecial(const char c, va_list vad)
{
	size_t	count;

	count = 0;
	if (c == 'c')
	{
		ft_putchar_fd(va_arg(vad, int), 1);
		count += 1;
	}
	else if (c == '%')
	{
		ft_putchar_fd('%', 1);
		count += 1;
	}
	else if (c == 's')
	{
		ft_putstr_fd(va_arg(vad, char), 1);
		count = count + ft_strlen(va_arg, char); // Hacer la forma text
		/* Esta funcion rederidige si es un texto o un numero
		 * En caso de ser un texto -> Preparamos con put + strlen
		 * En caso de ser un numero -> Preparamos con base + strlen
		 */
	}
	/*
	else if (c == 'd')
	{
		///ft_putchar_fd(va_arg(va, int), 1);
		ft_putchar_fd('_', 1);
		ft_putchar_fd('D', 1);
	}
	*/
	count = 1;
	return (count);
}

int	ft_printf(char const *str, ...)
{
	va_list	vad;
	char	*special;
	size_t	count;
	size_t	i;

	i = 0;
	count = 0;
	va_start(vad, str);
	special = "cspdiuxX%";
	while (str[i])
	{
		if (str[i] == '%' && ft_strchr(special, str[i + 1]))
		{
			count += ft_printspecial(str[i + 1], vad);
			i++;
		}
		else
		{
			ft_putchar_fd(str[i],1);
			count++;
		}
		i++;
	}
	va_end(vad);
	return (count);
}
