/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dekulow <dekulow@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/29 22:06:04 by dekulow           #+#    #+#             */
/*   Updated: 2023/11/29 22:06:05 by dekulow          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

/**
 * Copies a substring from a given string.
 *
 * @param s The string to extract the substring from.
 * @param start The starting index of the substring.
 * @param len The length of the substring.
 * @return The newly allocated substring, or NULL if allocation fails.
 */
char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*dst;
	size_t	i;

	i = 0;
	if (!s)
		return (NULL);
	if (!len || start >= ft_strlen(s))
		return (ft_calloc(1, 1));
	if (len > ft_strlen(s + start))
		len = ft_strlen(s + start);
	dst = (char *)malloc(sizeof(char) * (len + 1));
	if (dst == NULL)
		return (NULL);
	while (len-- > 0)
		dst[i++] = s[start++];
	dst[i] = '\0';
	return (dst);
}
