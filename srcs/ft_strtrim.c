/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dekulow <dekulow@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/29 22:05:59 by dekulow           #+#    #+#             */
/*   Updated: 2023/11/29 22:06:01 by dekulow          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

static int	ft_is_character(char s, const char *set)
{
	while (*set)
	{
		if (s == *set)
			return (1);
		set++;
	}
	return (0);
}

static int	ft_set_point(const char *s1, const char *set, int position)
{
	int	i;
	int	point;
	int	len;

	len = ft_strlen(s1) - 1;
	point = 0;
	i = 0;
	if (position)
	{
		while (s1[i] && ft_is_character(s1[i], (char *)set))
		{
			point++;
			i++;
		}
	}
	else
	{
		while (s1[len] != '\0' && ft_is_character(s1[len], set))
		{
			point++;
			len--;
		}
	}
	return (point);
}

/**
 * Removes leading and trailing characters specified in the 'set'
 * string from the 's1' string.
 *
 * @param s1 The string to be trimmed.
 * @param set The set of characters to be removed.
 * @return A new dynamically allocated string with leading and trailing
 * characters removed, or NULL if allocation fails.
 */
char	*ft_strtrim(char const *s1, char const *set)
{
	char		*dst;
	size_t		i;
	size_t		p_start;
	size_t		p_end;
	size_t		start;

	if (!s1 || !set)
		return (NULL);
	p_end = ft_set_point(s1, set, 0);
	p_start = ft_set_point(s1, set, 1);
	start = p_start;
	i = 0;
	if (ft_strlen(s1) == p_start)
		return (ft_calloc(1, 1));
	dst = (char *)malloc(sizeof(char) *((ft_strlen(s1) - p_start - p_end) + 1));
	if (dst == NULL)
		return (NULL);
	while (i < (ft_strlen(s1) - p_start - p_end))
		dst[i++] = s1[start++];
	dst[i] = '\0';
	return (dst);
}
