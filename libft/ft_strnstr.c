/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mintan <mintan@student.42singapore.sg      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/17 21:22:42 by mintan            #+#    #+#             */
/*   Updated: 2024/05/27 20:58:06 by mintan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Description: Locates the first occurence of the null-termindated string
   (needle) in the null-terminated string (haystack). Only a max no. of char n
   is searched within the haystack.
   Return value: Haystack. If the needle is '\0'
   Return value: Pointer to first occurence of needle in haystack within the
   first len char
   Return value: NULL if needle not found within first len char
 */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)

{
	size_t	nedlen;
	size_t	i;

	i = 0;
	if (*needle == '\0')
		return ((char *)haystack);
	if (ft_strlen(haystack) > 0)
	{
		nedlen = ft_strlen(needle);
		while (i + nedlen <= len)
		{
			if (ft_strncmp(&haystack[i], needle, nedlen) == 0)
				return ((char *)&haystack[i]);
			i++;
		}
	}
	return (NULL);
}
