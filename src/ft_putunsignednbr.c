/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putunsignednbr.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mintan <mintan@student.42singapore.sg>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/04 22:26:42 by mintan            #+#    #+#             */
/*   Updated: 2024/06/07 21:26:05 by mintan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ft_printf.h"
#include "../libft/libft.h"

/*
void	ft_putlongnbr(long l, int *count)
{
	char		c;

	if (l < 0)
	{
		ft_putchar('-');
		(*count)++;
		ft_putlongnbr(-l, count);
	}
	else if (l > 9)
	{
		ft_putlongnbr(l / 10, count);
		ft_putlongnbr(l % 10, count);
	}
	else
	{
		c = l + 48;
		ft_putchar(c);
		(*count)++;
	}
}
*/

/* Description: converts an unsigned integer into a string and
   writes the string. Returns the string length */

int	ft_putunsignednbr(unsigned int n)
{
	int		ret;
	long	l;

	ret = 0;
	l = (long)n;
	ft_putlongnbr(l, &ret);
	return (ret);
}
