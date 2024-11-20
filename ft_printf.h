/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vicalons <vicalons@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/15 13:24:38 by vicalons          #+#    #+#             */
/*   Updated: 2024/11/20 11:12:17 by vicalons         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdio.h>
# include <stdlib.h>

// Library varidic
# include <stdarg.h>

// Library libft
# include "./libft/libft.h"

# ifndef HEX_UPP
#  define HEX_UPP = "0123456789ABCDEF"
# endif

# ifndef HEX_LOW
#  define HEX_LOW = "0123456789abcdef"
# endif

# ifndef DECIMAL
#  define DECIMAL = "0123456789"
# endif

int	ft_printf(const char *str, ...);
size_t	ft_printspecial(const char c, va_list va);

#endif
