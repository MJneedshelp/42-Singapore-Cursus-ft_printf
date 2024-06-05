/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mintan <mintan@student.42singapore.sg>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/04 22:26:42 by mintan            #+#    #+#             */
/*   Updated: 2024/06/05 20:54:56 by mintan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Description:
*/

#include "../include/ft_printf.h"
//#include "../libft/libft.h"
#include<stdio.h>

int		ft_printf(const char *str, ...)
{
	//probably some variadic function thingy here
	//probbaly need to check if the number of variadic items in the list match the number of % signs. behaviour if more % than args
	int		n;
	//Declares pointer to argument list
	va_list	ptr;
	size_t	len;

	n = 0;
	len = ft_strlen(str);

	va_start(ptr, str);

	//printf("%s\n", str);
	while (n < 3)
	{
		printf("%s\n", va_arg(ptr, const char *));
		n++;
	}


	va_end(ptr);

	return (n);
}

/*
int	main(void)
{
	int	ret;
	int	test;

	ret = ft_printf("test1", "test2", "test3", "test4");
	printf("Return: %d\n", ret);
	test = printf("");
	printf("No.: %d\n", test);
}
*/
