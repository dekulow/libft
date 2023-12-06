/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dekulow <dekulow@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/29 22:05:44 by dekulow           #+#    #+#             */
/*   Updated: 2023/11/29 22:05:46 by dekulow          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * Compare two strings up to a specified number of characters.
 *
 * This function compares the first `n` characters of the strings `s1` and `s2`.
 * The comparison is done using unsigned characters, so it can handle all
 * possible characters.
 *
 * @param s1 The first string to compare.
 * @param s2 The second string to compare.
 * @param n The maximum number of characters to compare.
 * @return An integer greater than, equal to, or less than 0, depending
 * on the comparison result.
 * - A value greater than 0 indicates that `s1` is greater than `s2`.
 * - A value less than 0 indicates that `s1` is less than `s2`.
 * - A value of 0 indicates that the first `n` characters of both
 * strings are equal.
 */
int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	while ((s1[i] != '\0' || s2[i] != '\0') && i < n)
	{
		if ((unsigned char) s1[i] != (unsigned char) s2[i])
			return ((unsigned char) s1[i] - (unsigned char) s2[i]);
		i++;
	}
	return (0);
}
