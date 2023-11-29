/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dekulow <dekulow@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/29 21:55:31 by dekulow           #+#    #+#             */
/*   Updated: 2023/11/29 21:55:33 by dekulow          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

/**
 * Allocates memory and sets it to zero.
 *
 * This function allocates memory for an array of nmemb elements of size bytes
 * each and returns a pointer to the allocated memory. The memory is set to
 * zero. If nmemb or size is zero, then calloc() returns either NULL, or a
 * unique pointer value that can later be successfully passed to free().
 *
 * @param nmemb Number of elements to allocate.
 * @param size Size of each element.
 * @return A pointer to the allocated memory.
 */
void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*memory;
	size_t	total_size;

	if (nmemb == 0 || size == 0)
	{
		nmemb = 1;
		size = 1;
	}
	if (nmemb > ((size_t) - 1 / size))
		return (NULL);
	else
		total_size = (nmemb * size);
	memory = malloc(total_size);
	if (!memory)
		return (NULL);
	ft_bzero(memory, total_size);
	return (memory);
}
