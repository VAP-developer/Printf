/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vicalons <vicalons@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/19 13:40:48 by vicalons          #+#    #+#             */
/*   Updated: 2024/11/20 11:29:43 by vicalons         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	main(void)
{
	int	c='a';
	int	l1_pr;
	int	l2;

	/* EXAMPLE NO_VA: %
	 */
	l1_pr = printf("1_PRINTF: Es %c un %%%%carac %% ter :\n", c);
	printf("len: %d\n", l1_pr);
	l2 = ft_printf("2_PRINTF: Es %c un %%%%carac %% ter :\n", c);
	printf("len: %d\n", l2);
	/**/
	/* EXAMPLE CHARACTER: %c
	l1_pr = printf("1_PRINTF: Es %c un caracter:\n",c);
	printf("len: %d\n", l1_pr);
	l2 = ft_printf("2_PRINTF: Es %c un caracter:\n",c);
	printf("len_ft: %d\n", l2);
	*/
	return (0);
}
