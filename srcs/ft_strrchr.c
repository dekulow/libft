/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dekulow <dekulow@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/29 22:05:54 by dekulow           #+#    #+#             */
/*   Updated: 2023/11/29 22:05:56 by dekulow          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

/**
 * Returns a pointer to the last occurrence of the character 'c'
 * in the string 's'.
 *
 * @param s The string to search in.
 * @param c The character to search for.
 * @return A pointer to the last occurrence of 'c' in 's',
 * or NULL if 'c' is not found.
 */
char	*ft_strrchr(const char *s, int c)
{
	char	*find_at;

	find_at = NULL;
	while (*s)
	{
		if (*s == (char) c)
			find_at = (char *) &*s;
		s++;
	}
	if (*s == c)
		find_at = (char *) &*s;
	return (find_at);
}
