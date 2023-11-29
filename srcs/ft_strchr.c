/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dekulow <dekulow@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/29 22:01:01 by dekulow           #+#    #+#             */
/*   Updated: 2023/11/29 22:01:03 by dekulow          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

/**
 * Searches for the first occurrence of a character in a string.
 *
 * @param s The string to search in.
 * @param c The character to search for.
 * @return A pointer to the first occurrence of the character in the string,
 *         or NULL if the character is not found.
 */
char	*ft_strchr(const char *s, int c)
{
	int	i;

	i = 0;
	if (c == 0)
		return ((char *) s + ft_strlen(s));
	while (s[i] != '\0')
	{
		if (s[i] == (c % 256))
			return ((char *) &s[i]);
		i++;
	}
	return (NULL);
}
