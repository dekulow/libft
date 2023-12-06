/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dekulow <dekulow@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/29 21:59:05 by dekulow           #+#    #+#             */
/*   Updated: 2023/11/29 21:59:07 by dekulow          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * Copies a block of memory from a source address to a destination address.
 *
 * @param dest The pointer to the destination address where the memory will
 * be copied to.
 * @param src The pointer to the source address where the memory will be
 * copied from.
 * @param len The number of bytes to be copied.
 * @return A pointer to the destination address.
 */
void	*ft_memcpy(void *dest, const void *src, size_t len)
{
	unsigned char	*cdest;
	unsigned char	*csrc;

	cdest = (unsigned char *)dest;
	csrc = (unsigned char *)src;
	if ((csrc == cdest) || (len == 0))
		return (dest);
	if (!cdest && !csrc)
		return (NULL);
	while (len--)
		*cdest++ = *csrc++;
	return (dest);
}
