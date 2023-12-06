/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dekulow <dekulow@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/29 21:58:35 by dekulow           #+#    #+#             */
/*   Updated: 2023/11/29 21:58:36 by dekulow          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * Compares the first n bytes of memory areas pointed to by s1 and s2.
 *
 * @param s1 Pointer to the first memory area.
 * @param s2 Pointer to the second memory area.
 * @param n Number of bytes to compare.
 * @return 0 if the memory areas are equal, a negative value if s1 is less
 * than s2, or a positive value if s1 is greater than s2.
 */
int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*cs1;
	unsigned char	*cs2;

	cs1 = (unsigned char *)s1;
	cs2 = (unsigned char *)s2;
	if (n == 0)
		return (0);
	n -= 1;
	while (*cs1 == *cs2 && n--)
	{
		cs1++;
		cs2++;
	}
	if (*cs2 > *cs1)
		return (-1);
	else if (*cs2 < *cs1)
		return (1);
	return (0);
}
