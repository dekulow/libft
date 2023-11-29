/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dekulow <dekulow@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/29 21:58:08 by dekulow           #+#    #+#             */
/*   Updated: 2023/11/29 21:58:09 by dekulow          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

/**
 * Calculates the size of a linked list.
 *
 * This function iterates through the linked list starting from the given node
 * and counts the number of nodes in the list.
 *
 * @param lst The pointer to the head of the linked list.
 * @return The number of nodes in the linked list.
 */
int	ft_lstsize(t_list *lst)
{
	t_list	*tlist;
	int		count;

	tlist = lst;
	count = 0;
	while (tlist)
	{
		tlist = tlist->next;
		count++;
	}
	return (count);
}
