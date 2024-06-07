/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putptr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mintan <mintan@student.42singapore.sg>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/04 22:26:42 by mintan            #+#    #+#             */
/*   Updated: 2024/06/07 21:25:28 by mintan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ft_printf.h"
#include "../libft/libft.h"

//Probably needs some logic to handle more than max min int

static	void	ft_putunsignedlonghexa(unsigned long l, int *count, char *base)
{
	if (l > 15)
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

/* Description: takes in a pointer as an unsigned long and writes it out as
   a hexadecimal string. Returns the length of the string.
   */

int	ft_putptr(unsigned long l, char *base)
{
	int		ret;
	long	l;

	ret = 0;
	ret = write(1, "0x", 2);
	ft_putunsignedlonghexa(l, &ret, base);
	return (ret);
}
