/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   unittest_hexa.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mintan <mintan@student.42singapore.sg>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/06 07:33:00 by mintan            #+#    #+#             */
/*   Updated: 2024/06/06 17:52:17 by mintan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"../include/ft_printf.h"

int	main(void)
{
	printf("==========Test: hexa==========\n\n");

	int			exp_ret;
	int			act_ret;

	printf("printf output: ");
	//exp_ret = printf("Lowercase hexadecimal %x\n", -2147483648);
	exp_ret = printf("Lowercase hexadecimal %x\n", -2147483647);
	printf("\nExpected return: %d\n\n", exp_ret);
	printf("ft_printf output: ");
	//act_ret = ft_printf("Lowercase hexadecimal %x\n", -2147483648);
	act_ret = ft_printf("Lowercase hexadecimal %x\n", -2147483647);
	printf("\nActual return: %d\n\n", act_ret);

	printf("==================================================\n\n");
	printf("printf output: ");
	//exp_ret = printf("Uppercase hexadecimal %X\n", -2147483648);
	exp_ret = printf("Uppercase hexadecimal %X\n", -2147483647);
	printf("\nExpected return: %d\n\n", exp_ret);
	printf("ft_printf output: ");
	//act_ret = ft_printf("Uppercase hexadecimal %X\n", -2147483648);
	act_ret = ft_printf("Uppercase hexadecimal %X\n", -21474836487);
	printf("\nActual return: %d\n\n", act_ret);

	printf("==================================================\n\n");
	printf("printf output: ");
	exp_ret = printf("Lowercase hexadecimal %x\n", 2147483647);
	printf("\nExpected return: %d\n\n", exp_ret);
	printf("ft_printf output: ");
	act_ret = ft_printf("Lowercase hexadecimal %x\n", 2147483647);
	printf("\nActual return: %d\n\n", act_ret);

	printf("==================================================\n\n");
	printf("printf output: ");
	exp_ret = printf("Uppercase hexadecimal %X\n", 2147483647);
	printf("\nExpected return: %d\n\n", exp_ret);
	printf("ft_printf output: ");
	act_ret = ft_printf("Uppercase hexadecimal %X\n", 2147483647);
	printf("\nActual return: %d\n\n", act_ret);
}
