/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   unittest_str.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mintan <mintan@student.42singapore.sg>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/06 07:33:00 by mintan            #+#    #+#             */
/*   Updated: 2024/06/06 13:41:27 by mintan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"../include/ft_printf.h"

int	main(void)
{
	printf("==========Test: string==========\n\n");

	int			exp_ret;
	int			act_ret;

	printf("printf output: ");
	exp_ret = printf("Hello %s\n", "world");
	printf("\nExpected return: %d\n\n", exp_ret);
	printf("ft_printf output: ");
	act_ret = ft_printf("Hello %s\n", "world");
	printf("\nActual return: %d\n\n", act_ret);

	printf("==================================================\n\n");
	printf("printf output: ");
	exp_ret = printf("%s Hello %s", "Hi", "world");
	printf("\nExpected return: %d\n\n", exp_ret);
	printf("ft_printf output: ");
	act_ret = ft_printf("%s Hello %s", "Hi", "world");
	printf("\nActual return: %d\n\n", act_ret);
}
