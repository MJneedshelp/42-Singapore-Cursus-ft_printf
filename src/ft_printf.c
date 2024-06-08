/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mintan <mintan@student.42singapore.sg>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/04 22:26:42 by mintan            #+#    #+#             */
/*   Updated: 2024/06/08 21:48:14 by mintan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ft_printf.h"
#include "../libft/libft.h"

/* Description: writes a character  */
int	ft_putchar(char c)
{
	write(1, &c, 1);
	return (1);
}

/* Description: Triggered when the input string contains a % format specifier.
   Calls other functions to handle the different format specifiers. */
static	int	format_chk(char c, va_list ptr)
{
	int	ret;

	ret = 0;
	if (c == 'c')
		ret += ft_putchar(va_arg(ptr, int));
	else if (c == 's')
		ret += ft_putstr(va_arg(ptr, char *));
	else if (c == 'p')
		ret += ft_putptr(va_arg(ptr, unsigned long), "0123456789abcdef");
	else if (c == 'd' || c == 'i')
		ret += ft_putnbr(va_arg(ptr, int));
	else if (c == 'u')
		ret += ft_putunsignednbr(va_arg(ptr, unsigned int));
	else if (c == 'x')
		ret += ft_puthexa(va_arg(ptr, unsigned int), "0123456789abcdef");
	else if (c == 'X')
		ret += ft_puthexa(va_arg(ptr, unsigned int), "0123456789ABCDEF");
	else if (c == '%')
		ret += ft_putchar(c);
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
   - %%: % sigm */
int	ft_printf(const char *str, ...)
{
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
			ret += format_chk(str[i + 1], ptr);
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

/*probably need to check if the number of variadic items in the list 
  match the number of % signs. behaviour if more % than args
  check for cases like only % and return error
  check for invalid specifiers and return -1 at the start */
