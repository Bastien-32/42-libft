/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: badal-la <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/08 09:48:01 by badal-la          #+#    #+#             */
/*   Updated: 2024/11/08 11:13:37 by badal-la         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	char	*dest;

	i = 0;
	if ((size_t)start >= ft_strlen(s))
	{
		dest = (char *)malloc((1) * sizeof(char));
		dest[0] = '\0';
		return (dest);
	}
	if (len > ft_strlen(s) || (start + len > ft_strlen(s)))
		len = ft_strlen(s) - start;
	dest = (char *)malloc((len + 1) * sizeof(char));
	if (dest == NULL)
		return (NULL);
	while (((unsigned char *)s)[start + i] && i < len)
	{
		dest[i] = ((unsigned char *)s)[start + i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
/*
#include <stdio.h>

int main (void)
{
	char *dest;
	char *src = "0123456789";
	
	dest = ft_substr(src, 9, 10);
	printf("%s\n", dest);
	free(dest);
}
*/

/* bornes a gerer :
	start > strlen(s) 
		=> retourner \0 en faisant un malloc de 1 
			en debut de fonction 
	len > ft_strlen(s) || (start + len > ft_strlen(s))
		=> sinon alloue trop de memoire
*/