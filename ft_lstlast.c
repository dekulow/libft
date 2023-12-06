/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dekulow <dekulow@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/29 21:57:40 by dekulow           #+#    #+#             */
/*   Updated: 2023/11/29 21:57:42 by dekulow          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * Returns the last element of the list.
 *
 * @param lst The beginning of the list.
 * @return The last element of the list.
 */
t_list	*ft_lstlast(t_list *lst)
{
	t_list	*tlist;

	if (!lst)
		return (NULL);
	tlist = lst;
	while (tlist->next)
		tlist = tlist->next;
	return (tlist);
}
