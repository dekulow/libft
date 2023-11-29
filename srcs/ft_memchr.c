/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dekulow <dekulow@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/29 21:58:18 by dekulow           #+#    #+#             */
/*   Updated: 2023/11/29 21:58:20 by dekulow          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"
/**
 * Searches for the first occurrence of the character 'c' in the first 'n'
 * bytes of the memory area pointed to by 's'.
 *
 * @param s     Pointer to the memory area to be searched.
 * @param c     Character to be located.
 * @param n     Number of bytes to be searched.
 * @return      Pointer to the first occurrence of 'c' in the memory area,
 * or NULL if 'c' is not found.
 */
void	*ft_memchr(const void *s, int c, size_t n)
{
	const unsigned char	*cs;

	cs = (const unsigned char *)s;
	while (n-- > 0)
	{
		if (*cs == (unsigned char) c)
			return ((void *) cs);
		cs++;
	}
	return (NULL);
}
