/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dekulow <dekulow@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/29 21:59:22 by dekulow           #+#    #+#             */
/*   Updated: 2023/11/29 22:08:34 by dekulow          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

/**
 * Fills a block of memory with a specified value.
 *
 * @param s     Pointer to the memory block to be filled.
 * @param c     Value to be set.
 * @param n     Number of bytes to be filled.
 * @return      Pointer to the memory block.
 */
void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char	*t;

	t = s;
	while (n > 0)
	{
		*t = (unsigned char)c;
		t++;
		n--;
	}
	return (s);
}
