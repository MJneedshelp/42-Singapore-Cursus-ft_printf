/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mintan <mintan@student.42singapore.sg>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/04 22:22:43 by mintan            #+#    #+#             */
/*   Updated: 2024/06/07 21:22:28 by mintan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include<stdio.h>			//remove later
# include <stdarg.h>
# include <unistd.h>
# include "../libft/libft.h"

int		ft_printf(const char *str, ...);
int		ft_putchar(char c);
int		ft_putstr(char *str);
int		ft_putnbr(int n);
int		ft_puthexa(unsigned int n, char *base);
int		ft_putunsignednbr(unsigned int n);

void	ft_putlongnbr(long l, int *count);

#endif
