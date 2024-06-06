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
#include "../libft/libft.h"

static	int	ft_putchar(char c)
{
	write(1, &c, 1);
	return (1);
}

/* Description: Attempts to replicate the real printf function. Handles the
   cspdiuxX% conversion:
   - %c: single character
   - %s: string
   - %p: void * pointer. Printed in hexadecimal format
   - %d: decimal (base 10) number
   - %i: same as %d
   - %u: unsigned decimal (base 10) number
   - %x: hexadecimal (base 16) lowercase
   - %X: hexadecimal (base 16) uppercase
   - %%: % sigm
   */
int		ft_printf(const char *str, ...)
{
	//probably some variadic function thingy here
	//probbaly need to check if the number of variadic items in the list match the number of % signs. behaviour if more % than args
	int		ret;
	int		i;

	va_list	ptr;
	ret = 0;
	i = 0;
	va_start(ptr, str);
	while (str[i] != '\0')
	{
		if (str[i] == '%')
		{
			//some function that takes in ptr - the current item in the va list 
			//each function should perform the writing action and return the len of the str so that it can be incremented here
			//printf("%s\n", va_arg(ptr, const char *));
		}
		else
		{
			ret = ret + ft_putchar(str[i]);
			i++;
		}
	}
	va_end(ptr);
	return (ret);
}
