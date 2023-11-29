/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dekulow <dekulow@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/29 21:54:40 by dekulow           #+#    #+#             */
/*   Updated: 2023/11/29 21:54:44 by dekulow          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

/**
 * Sets the first n bytes of the memory pointed to by s to zero.
 *
 * @param s Pointer to the memory to be zeroed.
 * @param n Number of bytes to be zeroed.
 */
void	ft_bzero(void *s, size_t n)
{
	char	*t;

	t = (char *)s;
	while (n--)
	{
		*t = 0;
		t++;
	}
}
