/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mintan <mintan@student.42singapore.sg>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/04 22:26:42 by mintan            #+#    #+#             */
/*   Updated: 2024/06/06 13:41:37 by mintan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ft_printf.h"
#include "../libft/libft.h"

/* Description: writes a string and returns the string length */
int	ft_putstr(char *str)
{
	int	ret;

	ret = 0;
	while (str[ret] != '\0')
	{
		write(1, &str[ret], 1);
		ret++;
	}
	return (ret);
}
