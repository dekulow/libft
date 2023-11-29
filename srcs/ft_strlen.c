/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dekulow <dekulow@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/29 22:01:46 by dekulow           #+#    #+#             */
/*   Updated: 2023/11/29 22:01:47 by dekulow          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

/**
 * Calculates the length of a null-terminated string.
 *
 * @param s The string to calculate the length of.
 * @return The length of the string.
 */
size_t	ft_strlen(const char *s)
{
	const char	*ptr;

	ptr = s;
	while (*ptr != '\0')
		ptr++;
	return ((size_t)(ptr - s));
}
