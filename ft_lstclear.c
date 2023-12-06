/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dekulow <dekulow@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/29 21:56:58 by dekulow           #+#    #+#             */
/*   Updated: 2023/11/29 22:08:59 by dekulow          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * Clears a linked list by deleting each node and its content.
 *
 * This function clears a linked list by deleting each node and its content.
 * The content of each node is deleted using the provided 'del' function.
 * The 'del' function should be able to handle the deletion of the content.
 *
 * @param lst A pointer to the pointer to the first node of the linked list.
 * @param del The function used to delete the content of each node.
 */
void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*tcontent;

	if (!del || !lst)
		return ;
	while (*lst != NULL)
	{
		tcontent = (*lst)->next;
		del((*lst)->content);
		free(*lst);
		*lst = tcontent;
	}
	*lst = NULL;
}
