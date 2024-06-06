/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   unittest_plainstring.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mintan <mintan@student.42singapore.sg>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/06 07:33:00 by mintan            #+#    #+#             */
/*   Updated: 2024/06/06 07:33:00 by mintan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"../include/ft_printf.h"

int	main(void)
{
	printf("==========Test: Plain string. No extra arguments.==========\n\n");

	const char	*str1;
	const char	*str2;
	int			exp_ret;
	int			act_ret;

	str1 = "hello";
	printf("printf output: ");
	exp_ret = printf(str1);
	printf("\nExpected return: %d\n\n", exp_ret);
	printf("ft_printf output: ");
	act_ret = ft_printf(str1);
	printf("\nActual return: %d\n\n", act_ret);

	printf("==================================================\n\n");
	str2 = "";
	printf("printf output: ");
	exp_ret = printf(str2);
	printf("\nExpected return: %d\n\n", exp_ret);
	printf("ft_printf output: ");
	act_ret = ft_printf(str2);
	printf("\nActual return: %d\n\n", act_ret);
}
