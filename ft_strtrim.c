/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: badal-la <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/08 11:14:57 by badal-la          #+#    #+#             */
/*   Updated: 2024/11/08 11:39:10 by badal-la         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlentrim(const char *s, char const *set)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	while (s[i])
	{
		if (s[i] == set[0])
			j++;
		i++;
	}
	return (i - j);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int		i;
	int		j;
	char	*dest;

	i = 0;
	j = 0;
	dest = (char *)malloc((ft_strlentrim(s1, set) + 1) * sizeof(char));
	if (!dest)
		return (NULL);
	while (s1[i])
	{
		if (s1[i] != set[0])
		{
			dest[j] = s1[i];
			i++;
			j++;
		}
		else
			i++;
	}
	dest[j] = '\0';
	return (dest);
}
/*
#include <stdio.h>

int main(void)
{
	char	*s = "Hello, world   !";
	char	*set = " ";
	char	*dest = ft_strtrim(s, set);
	printf("%s\n", dest);
}
*/