/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dekulow <dekulow@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/29 21:59:14 by dekulow           #+#    #+#             */
/*   Updated: 2023/11/29 21:59:16 by dekulow          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * Copies a block of memory from source to destination, handling overlapping
 * memory regions.
 *
 * @param dest The pointer to the destination memory block.
 * @param src The pointer to the source memory block.
 * @param n The number of bytes to copy.
 * @return A pointer to the destination memory block.
 */
void	*ft_memmove(void *dest, const void *src, size_t n)
{
	char	*cdest;
	char	*csrc;

	if ((src == dest) || (n == 0))
		return (dest);
	if (!dest && !src)
		return (NULL);
	if (dest < src)
	{
		cdest = (char *) dest;
		csrc = (char *) src;
		while (n--)
			*cdest++ = *csrc++;
	}
	else
	{
		cdest = (char *) dest + (n - 1);
		csrc = (char *) src + (n - 1);
		while (n--)
			*cdest-- = *csrc--;
	}
	return (dest);
}
