/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mintan <mintan@student.42singapore.sg>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/04 22:26:42 by mintan            #+#    #+#             */
/*   Updated: 2024/06/06 17:52:25 by mintan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ft_printf.h"
#include "../libft/libft.h"

//Probably needs some logic to handle more than max min int

static	void	ft_putlongnbr(long l, int *count)
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

/* Description: converts an integer into a string and writes the string.
   Returns the string length */
int	ft_putnbr(int n)
{
	int		ret;
	long	l;

	ret = 0;
	l = (long)n;
	ft_putlongnbr(l, &ret);
	return (ret);
}
