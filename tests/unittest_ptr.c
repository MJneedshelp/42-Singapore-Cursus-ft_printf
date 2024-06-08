/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   unittest_ptr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mintan <mintan@student.42singapore.sg>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/06 07:33:00 by mintan            #+#    #+#             */
/*   Updated: 2024/06/08 20:57:09 by mintan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"../include/ft_printf.h"

int	main(void)
{
	printf("==========Test: pointer==========\n\n");

	int			exp_ret;
	int			act_ret;
	int			n;

	n = 42;

	printf("printf output: ");
	exp_ret = printf("Pointer of n %p\n", &n);
	printf("\nExpected return: %d\n\n", exp_ret);
	printf("ft_printf output: ");
	act_ret = ft_printf("Pointer of n %p\n", &n);
	printf("\nActual return: %d\n\n", act_ret);

	printf("==================================================\n\n");
	printf("printf output: ");
	exp_ret = printf("Pointer of n %p\n", NULL);
	printf("\nExpected return: %d\n\n", exp_ret);
	printf("ft_printf output: ");
	act_ret = ft_printf("Pointer of n %p\n", NULL);
	printf("\nActual return: %d\n\n", act_ret);

	printf("==================================================\n\n");
	printf("printf output: ");
	exp_ret = printf("Pointer %p %p\n", 0, 0);
	printf("\nExpected return: %d\n\n", exp_ret);
	printf("ft_printf output: ");
	act_ret = ft_printf("Pointer %p %p\n", 0, 0);
	printf("\nActual return: %d\n\n", act_ret);





/*
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

	printf("==================================================\n\n");
	printf("printf output: ");
	exp_ret = printf("Uppercase hexadecimal %X\n", -1);
	printf("\nExpected return: %d\n\n", exp_ret);
	printf("ft_printf output: ");
	act_ret = ft_printf("Uppercase hexadecimal %X\n", -1);
	printf("\nActual return: %d\n\n", act_ret);
	*/
}
