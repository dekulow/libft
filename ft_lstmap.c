/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dekulow <dekulow@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/29 21:57:45 by dekulow           #+#    #+#             */
/*   Updated: 2023/11/29 21:57:46 by dekulow          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * Applies the function `f` to each element of the linked list `lst`
 * and creates a new list with the results.
 *
 * The `del` function is used to delete the content of any element if the
 * allocation of a new element fails.
 *
 * @param lst The linked list to iterate over.
 * @param f The function to apply to each element.
 * @param del The function to delete the content of an element.
 * @return The new list created by applying `f` to each element of `lst`,
 * or NULL if the allocation of a new element fails.
 */
t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*felt;
	t_list	*nlst;

	if (!f || !del)
		return (NULL);
	felt = NULL;
	while (lst)
	{
		nlst = ft_lstnew(f(lst->content));
		if (!(nlst))
		{
			while (felt)
			{
				nlst = felt->next;
				del(nlst->content);
				free(felt);
				felt = nlst;
			}
			lst = NULL;
			return (NULL);
		}
		ft_lstadd_back(&felt, nlst);
		lst = lst->next;
	}
	return (felt);
}
