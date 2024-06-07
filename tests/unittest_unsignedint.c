/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   unittest_unsignedint.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mintan <mintan@student.42singapore.sg>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/06 07:33:00 by mintan            #+#    #+#             */
/*   Updated: 2024/06/07 21:49:30 by mintan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"../include/ft_printf.h"

int	main(void)
{
	printf("==========Test: Unsignged Integer==========\n\n");

	int			exp_ret;
	int			act_ret;

	printf("printf output: ");
	exp_ret = printf("Unsigned Integer %u\n", -2147483648);
	printf("\nExpected return: %d\n\n", exp_ret);
	printf("ft_printf output: ");
	act_ret = ft_printf("Unsigned Integer %u\n", -2147483648);
	printf("\nActual return: %d\n\n", act_ret);

	printf("==================================================\n\n");
	printf("printf output: ");
	exp_ret = printf("Unsigned Integer %u\n", 2147483647);
	printf("\nExpected return: %d\n\n", exp_ret);
	printf("ft_printf output: ");
	act_ret = ft_printf("Unsigned Integer %u\n", 2147483647);
	printf("\nActual return: %d\n\n", act_ret);
}
