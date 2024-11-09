/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: badal-la <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/09 15:02:05 by badal-la          #+#    #+#             */
/*   Updated: 2024/11/09 15:43:36 by badal-la         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//calcule le nb de lettre - separateur gerer les separateurs qui se suivent
int	ft_lenw(const char *s, char c)
{
	int	i;
	int count;
	
	i = 0;
	count = 0;
	while (s[i])
	{
		if(s[i] != c && s[i - 1] != c)
			count++;
		i++;
	}
	return  (count);
}
/*
char	**ft_split(char const *s, char c)
{
	
}
*/

#include <stdio.h>

int main ()
{
	char *s = "ku i o jk ";
	char c = ' ';
	int i = ft_lenw(s, c);
	printf("%d", i);
}