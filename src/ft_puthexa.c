/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthexa.c                                       :+:      :+:    :+:   */
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

static	void	ft_putlonghexa(long l, int *count, char *base)
{
	if (l < 0)
	{
		ft_putchar('-');
		(*count)++;
		ft_putlonghexa(-l, count, base);
	}
	else if (l > 15)
	{
		ft_putlonghexa(l / 16, count, base);
		ft_putlonghexa(l % 16, count, base);
	}
	else
	{
		ft_putchar(base[l]);
		(*count)++;
	}
}

/* Description: converts an integer into a hexadecimal string and
   writes the string. Uses either the uppercase or lowercase base.
   Returns the string length */
int	ft_puthexa(int n, char *base)
{
	int		ret;
	long	l;

	ret = 0;
	l = (long)n;
	ft_putlonghexa(l, &ret, base);
	return (ret);
}