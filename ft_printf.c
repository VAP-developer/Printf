/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vicalons <vicalons@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/15 13:09:41 by vicalons          #+#    #+#             */
/*   Updated: 2024/11/15 13:48:48 by vicalons         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_print.h"

/* FUNC: Printf
 * 	1. Lee la primera letra
 * 	2. Si es un % vemos que es el siguiente caracter
 * 	3. Si es un caracter especial ejecutamos funcion
 * 	4. Si no seguimos leyendo
 *

int	ft_printf(const char *str, ...)
{
	va_list	element;
	int	let;

	let = 0;
	va_start(element, str);
	let = w_str(str, element, let);
	va_end(element);
	retrun (let);
}
*/

int	main(void)
{
	int	c='a';

	printf("Es %c un caracter: %c", ft_isalpha(c));
	return(0);
}
