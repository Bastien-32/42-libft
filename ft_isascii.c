/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: badal-la <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 10:19:01 by badal-la          #+#    #+#             */
/*   Updated: 2024/11/07 16:28:07 by badal-la         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isascii(int c)
{
	if (c >= 0 && c <= 127)
		return (1);
	else
		return (0);
}
/*
#include <stdio.h>

int main()
{
	printf("%s\n%s\n%s\n%s\n%s\n%s\n",
		ft_isascii(' ')? "ok" : "fail",
		ft_isascii('a')? "ok" : "fail",
		ft_isascii('K')? "ok" : "fail",
		ft_isascii('8')? "ok" : "fail",
		ft_isascii('$')? "ok" : "fail",
		ft_isascii('\n')? "ok" : "fail");
}
*/