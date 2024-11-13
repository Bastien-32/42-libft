/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: badal-la <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 10:17:46 by badal-la          #+#    #+#             */
/*   Updated: 2024/11/13 12:14:06 by badal-la         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Copies up to size - 1 characters from src to dest to ensure 
   that dest is always null-terminated (\0), as long as size 
   is greater than 0. The function returns the length of the 
   source string src, allowing the caller to determine if the 
   copy was truncated (if src is longer than size).
       /!\ Start of function:
           if (size == 0)
               return (ft_strlen(src));
       /!\ End of function:
           return (ft_strlen(src));*/

#include "libft.h"
/*
size_t	ft_strlen(const char *s)
{
	size_t	i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}
*/
size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	i;

	i = 0;
	if (size == 0)
		return (ft_strlen(src));
	while (src[i] && i < size - 1)
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (ft_strlen(src));
}
/*
#include <stdio.h>

int	main (void)
{
	char *src = "Bonjour";
	char dest[5];
	ft_strlcpy(dest, src, 5);
	printf("%s", dest);
	return (0);
}
*/