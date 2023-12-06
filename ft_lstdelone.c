/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dekulow <dekulow@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/29 21:57:06 by dekulow           #+#    #+#             */
/*   Updated: 2023/11/29 21:57:08 by dekulow          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * Deletes a single node from a linked list.
 *
 * This function deletes the given node from the linked list.
 * It calls the provided 'del' function to free the memory
 * allocated for the content of the node.
 *
 * @param lst The node to be deleted.
 * @param del The function used to free the memory of the node's content.
 */
void	ft_lstdelone(t_list *lst, void (*del)(void *))
{
	if (!del)
		return ;
	if (lst)
	{
		del(lst->content);
		free(lst);
	}
}
