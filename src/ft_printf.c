/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mintan <mintan@student.42singapore.sg>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/04 22:26:42 by mintan            #+#    #+#             */
/*   Updated: 2024/06/04 22:26:42 by mintan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Description:
*/

#include "../include/ft_printf.h"
#include "../libft/libft.h"
#include<stdio.h>

int		ft_printf(const char *str, ...)
{
	//probably some variadic function thingy here
	int		n;
	//Declares pointer to argument list
	va_list	ptr;

	n = 1;

	va_start(ptr, str);

	printf("%s\n", str);
	printf("%s\n", va_arg(ptr, const char *));


	va_end(ptr);

	return (n);
}


int	main(void)
{
	int	ret;
	ret = ft_printf("test1", "test2");
	printf("Return: %d\n", ret);

}
