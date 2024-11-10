/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: badal-la <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 10:19:33 by badal-la          #+#    #+#             */
/*   Updated: 2024/11/10 18:26:05 by badal-la         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t			i;
	unsigned char	*dest1;
	unsigned char	*src1;

	i = 0;
	src1 = (unsigned char *)src;
	dest1 = (unsigned char *)dest;
	if (!dest && !src)
		return (dest);
	while (i < n)
	{
		dest1[i] = src1[i];
		i++;
	}
	return (dest);
}
/*
#include <stdlib.h>
#include <stdio.h>

int	main (void)
{
	char src[]="bonjour";
	char *dest = malloc(20 * sizeof(char));

    if (dest == NULL) 
	{
        perror("malloc failed");
        return 1; 
	}
	printf("%s\n", src);
	memcpy(dest, src, 3);
	printf("%s\n", dest);
	ft_memcpy(dest, src, 3);
	printf("%s\n", dest);
	
}
*/