/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   unittest_wrongspecifier.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mintan <mintan@student.42singapore.sg>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/06 07:33:00 by mintan            #+#    #+#             */
/*   Updated: 2024/06/06 12:20:41 by mintan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"../include/ft_printf.h"

int	main(void)
{
	printf("==========Test: wrong specifier.==========\n\n");

	int			exp_ret;
	int			act_ret;

	//printf("printf output: ");
	//exp_ret = printf("Hello %c", 't');
	//printf("\nExpected return: %d\n\n", exp_ret);
	printf("ft_printf output: ");
	act_ret = ft_printf("Hello % ", 't');
	printf("\nActual return: %d\n\n", act_ret);

	printf("==================================================\n\n");
	printf("ft_printf output: ");
	act_ret = ft_printf("Hello %o ", 't');
	printf("\nActual return: %d\n\n", act_ret);
}
