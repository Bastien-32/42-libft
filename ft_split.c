/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: badal-la <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/09 15:02:05 by badal-la          #+#    #+#             */
/*   Updated: 2024/11/10 18:41:53 by badal-la         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_lenstring(const char *s, char c)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (s[i])
	{
		if (s[i] != c && (i == 0 || s[i - 1] == c))
			count++;
		i++;
	}
	return (count);
}

static size_t	ft_lenword(char const *s, char c, size_t n)
{
	size_t	i;

	i = 0;
	while (s[n + i] && s[n + i] != c)
		i++;
	return (i);
}

static char	*ft_strdupsplit(const char *s, size_t posi, size_t n)
{
	char	*dest;
	size_t	i;

	i = 0;
	dest = (char *)malloc((n + 1) * sizeof(char));
	if (!dest)
		return (NULL);
	while (i < n)
	{
		dest[i] = s[posi + i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

static char	**ft_free_tab(char **tab, size_t j)
{
	size_t	i;

	i = 0;
	while (i < j)
	{
		free(tab[i]);
		i++;
	}
	free(tab);
	return (NULL);
}

char	**ft_split(char const *s, char c)
{
	size_t	i;
	size_t	j;
	char	**tab;

	i = 0;
	j = 0;
	if (!s)
		return (NULL);
	tab = (char **)malloc((ft_lenstring(s, c) + 1) * sizeof(char *));
	if (!tab)
		return (NULL);
	while (s[i])
	{
		if (s[i] != c)
		{
			tab[j] = ft_strdupsplit(s, i, ft_lenword(s, c, i));
			if (!tab[j])
				return (ft_free_tab(tab, j));
			j++;
			i += ft_lenword(s, c, i);
		}
		else
			i++;
	}
	tab[j] = NULL;
	return (tab);
}

/*
#include <stdio.h>

int main ()
{
	char *s = "ku i   o jk   ";
	char c = ' ';
	char **tab;
	int i = 0;
	
	tab = ft_split(s, c);
	
	 if (!tab)
    {
        printf("Erreur d'allocation\n");
        return (1);
    }

    while (tab[i])
    {
        printf("tab[%d]: %s\n", i, tab[i]);
        free(tab[i]); 
        i++;
    }
	printf("%d", i);
	free (tab);
}
*/
/*
#include <stdio.h>

int main ()
{
	char *s = "ku i   o jk   ";
	char c = ' ';
	int j = ft_lenstring(s, c);
	printf("%d", j);
}
 */