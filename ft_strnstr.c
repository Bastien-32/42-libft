/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: badal-la <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 13:54:10 by badal-la          #+#    #+#             */
/*   Updated: 2024/11/14 13:04:14 by badal-la         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	if (little[0] == '\0')
		return ((char *)big);
	while (i < len && big[i])
	{
		j = 0;
		while (big[i + j] == little[j] && little[j]
			&& big[i + j] && i + j < len)
			j++;
		if (j == ft_strlen(little))
			return ((char *)&big[i]);
		i++;
	}
	return (NULL);
}
/*
#include <stdio.h>

int main (void)
{
	char	*big = "ma maman";
	char	*little = "ma";
	char	*t = ft_strnstr(big, little, 8);
	printf("big     : %p\n", &big[0]);
	printf("strnstr : %p\n", t);
	printf("valeur de retour : %s\n", t);
	return (0);	
}
*/
