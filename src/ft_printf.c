/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mintan <mintan@student.42singapore.sg>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/04 22:26:42 by mintan            #+#    #+#             */
/*   Updated: 2024/06/06 17:53:00 by mintan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Description:
*/

#include "../include/ft_printf.h"
#include "../libft/libft.h"

/* Description: writes a character 
 */
int	ft_putchar(char c)
{
	write(1, &c, 1);
	return (1);
}

/* Description:

   */
static	int	format_chk(char c, va_list ptr)
{
	//if else condition for all the different format types
	//probably can remove all the {} later
	//return -1 if not in the correct percentage
	int	ret;

	ret = 0;
	if (c == 'c')
		ret += ft_putchar(va_arg(ptr, int));
	else if (c == 's')
		ret += ft_putstr(va_arg(ptr, char *));
	else if (c == 'p')
	{

	}
	else if (c == 'd' || c == 'i')
	{
		ret += ft_putnbr(va_arg(ptr, int));
		printf("inside format chk: %d\n", ret);
	}
	else if (c == 'u')
	{

	}
	else if (c == 'x')
	{

	}
	else if (c == 'X')
	{

	}
	else if (c == '%')
		ret += ft_putchar(c);
	else
	{
		//return -1?
	}
	return (ret);
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
			//some function that takes in ptr - the current item in the va list and returns the len of converted string
				//sub functions inside to write the different conversions
					//each function should perform the writing action and return the len of the str so that it can be incremented here
				//probably should check for weird cases like "%"
			//increment i by 2
			//printf("%s\n", va_arg(ptr, const char *));
			printf("before format checker: %d\n", ret);
			ret += format_chk(str[i + 1], ptr);
			printf("after format checker: %d\n", ret);
			i = i + 2;
		}
		else
		{
			ret += ft_putchar(str[i]);
			i++;
		}
	}
	va_end(ptr);
	return (ret);
}
