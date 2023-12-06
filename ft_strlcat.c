/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dekulow <dekulow@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/29 22:01:37 by dekulow           #+#    #+#             */
/*   Updated: 2023/11/29 22:01:38 by dekulow          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * Concatenates the string pointed to by src to the end of the string
 * pointed to by dst. The total length of the resulting string
 * is limited to size-1 characters, ensuring null termination.
 * If size is less than or equal to the length of dst, the resulting
 * string will be truncated.
 *
 * @param dst   The destination string.
 * @param src   The source string.
 * @param size  The size of the destination buffer.
 *
 * @return The total length of the string that would have been created if
 * enough space had been available, excluding the null termination character.
 */
size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	len_dst;
	size_t	len_src;

	if ((!dst || !src) && size == 0)
		return (0);
	len_dst = ft_strlen(dst);
	len_src = ft_strlen(src);
	if (len_dst >= size)
		len_dst = size;
	if (len_dst == size)
		return (size + len_src);
	if (len_src < size - len_dst)
		ft_memcpy(dst + len_dst, src, len_src + 1);
	else
	{
		ft_memcpy(dst + len_dst, src, size - len_dst - 1);
		dst[size - 1] = '\0';
	}
	return (len_dst + len_src);
}
