/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   maintest.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mintan <mintan@student.42singapore.sg>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/06 07:33:00 by mintan            #+#    #+#             */
/*   Updated: 2024/06/06 09:00:40 by mintan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Description: combine all the unit tests here and compile this file with the
   libftprintf.a file. */

#include"../include/ft_printf.h"
#include <stdio.h>

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

	printf("==========Test: char==========\n\n");

	printf("printf output: ");
	exp_ret = printf("Hello %c", 't');
	printf("\nExpected return: %d\n\n", exp_ret);
	printf("ft_printf output: ");
	act_ret = ft_printf("Hello %c", 't');
	printf("\nActual return: %d\n\n", act_ret);

	printf("==================================================\n\n");
	printf("printf output: ");
	exp_ret = printf("%c Hello %c", 't', 'i');
	printf("\nExpected return: %d\n\n", exp_ret);
	printf("ft_printf output: ");
	act_ret = ft_printf("%c Hello %c", 't', 'i');
	printf("\nActual return: %d\n\n", act_ret);

	printf("==========Test: string==========\n\n");

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

	printf("==================================================\n\n");
	printf("printf output: ");
	exp_ret = printf("Hello %s", NULL);
	printf("\nExpected return: %d\n\n", exp_ret);
	printf("ft_printf output: ");
	act_ret = ft_printf("Hello %s", NULL);
	printf("\nActual return: %d\n\n", act_ret);

	printf("==========Test: pointer==========\n\n");

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

	printf("==========Test: Decimal and Integer==========\n\n");

	printf("printf output: ");
	exp_ret = printf("Decimal %d\n", -2147483648);
	printf("\nExpected return: %d\n\n", exp_ret);
	printf("ft_printf output: ");
	act_ret = ft_printf("Decimal %d\n", -2147483648);
	printf("\nActual return: %d\n\n", act_ret);

	printf("==================================================\n\n");
	printf("printf output: ");
	exp_ret = printf("Integer %i\n", -2147483648);
	printf("\nExpected return: %d\n\n", exp_ret);
	printf("ft_printf output: ");
	act_ret = ft_printf("Integer %i\n", -2147483648);
	printf("\nActual return: %d\n\n", act_ret);

	printf("==================================================\n\n");
	printf("printf output: ");
	exp_ret = printf("Integer %i\n", 2147483647);
	printf("\nExpected return: %d\n\n", exp_ret);
	printf("ft_printf output: ");
	act_ret = ft_printf("Integer %i\n", 2147483647);
	printf("\nActual return: %d\n\n", act_ret);

	printf("==================================================\n\n");
	printf("printf output: ");
	exp_ret = printf("Integer %i\n", 2147483647);
	printf("\nExpected return: %d\n\n", exp_ret);
	printf("ft_printf output: ");
	act_ret = ft_printf("Integer %i\n", 2147483647);
	printf("\nActual return: %d\n\n", act_ret);

	printf("==========Test: Unsignged Integer==========\n\n");

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

	printf("==========Test: hexa==========\n\n");

	printf("printf output: ");
	exp_ret = printf("Lowercase hexadecimal %x\n", -2147483648);
	printf("\nExpected return: %d\n\n", exp_ret);
	printf("ft_printf output: ");
	act_ret = ft_printf("Lowercase hexadecimal %x\n", -2147483648);
	printf("\nActual return: %d\n\n", act_ret);

	printf("==================================================\n\n");
	printf("printf output: ");
	exp_ret = printf("Uppercase hexadecimal %X\n", -2147483648);
	printf("\nExpected return: %d\n\n", exp_ret);
	printf("ft_printf output: ");
	act_ret = ft_printf("Uppercase hexadecimal %X\n", -2147483648);
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

	printf("==========Test: Percent sign %%==========\n\n");

	printf("printf output: ");
	exp_ret = printf("Hello %%");
	printf("\nExpected return: %d\n\n", exp_ret);
	printf("ft_printf output: ");
	act_ret = ft_printf("Hello %%");
	printf("\nActual return: %d\n\n", act_ret);

	printf("==================================================\n\n");
	printf("printf output: ");
	exp_ret = printf("%% Hello %%");
	printf("\nExpected return: %d\n\n", exp_ret);
	printf("ft_printf output: ");
	act_ret = ft_printf("%% Hello %%");
	printf("\nActual return: %d\n\n", act_ret);

	printf("==========Test: wrong specifier.==========\n\n");

	printf("ft_printf output: ");
	act_ret = ft_printf("Hello % ", 't');
	printf("\nActual return: %d\n\n", act_ret);

	printf("==================================================\n\n");
	printf("ft_printf output: ");
	act_ret = ft_printf("Hello %o ", 't');
	printf("\nActual return: %d\n\n", act_ret);
}
