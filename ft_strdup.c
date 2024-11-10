/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: badal-la <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 15:35:00 by badal-la          #+#    #+#             */
/*   Updated: 2024/11/06 16:37:30 by badal-la         ###   ########.fr       */
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
*/
char	*ft_strdup(const char *s)
{
	size_t	slen;
	char	*dest;

	slen = ft_strlen(s) + 1;
	dest = (char *)malloc((slen) * sizeof(char));
	if (dest == NULL)
		return (NULL);
	ft_strlcpy(dest, s, slen);
	return (dest);
}
/*
void	ft_putstr(char *str)
{
	while (*str)
		write(1, str++, 1);
}

int	main(void)
{
	char	src[] = "Bonjour";
	char	*dest;
	
	dest = ft_strdup(src);
	if (dest == NULL)
	{
		ft_putstr("Erreur d'allocation de memoire");
		return (1);
	}
	ft_putstr(dest);
	ft_putstr("\n");
	free(dest);
}
*/