/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: badal-la <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/12 14:40:47 by badal-la          #+#    #+#             */
/*   Updated: 2024/11/12 14:55:12 by badal-la         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	del(void *content)
{
	free(content);
}

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	if (!lst || !del)
		return ;
	while (*lst)
	{
		temp = (*lst)->next;   // Sauvegarde du nœud suivant
		del((*lst)->content);   // Libère le contenu du nœud actuel
		free(*lst);             // Libère le nœud actuel
		*lst = temp;            // Passe au nœud suivant
	}
	*lst = NULL;
}
