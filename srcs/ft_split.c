/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dekulow <dekulow@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/29 22:00:49 by dekulow           #+#    #+#             */
/*   Updated: 2023/11/29 22:00:51 by dekulow          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

void	ft_free_all(char **new_str)
{
	int	i;

	i = 0;
	while (new_str[i])
	{
		free(new_str[i]);
		new_str[i] = NULL;
		i++;
	}
	free(new_str);
}

static char	**ft_allocate(char **new_str, const char *str, char separator)
{
	const char	*tmp_str;
	char		**tmp_new_str;

	tmp_new_str = new_str;
	tmp_str = str;
	while (*tmp_str)
	{
		while (*str == separator)
			str++;
		tmp_str = str;
		while (*tmp_str && *tmp_str != separator)
			tmp_str++;
		if (*tmp_str == separator || tmp_str > str)
		{
			*tmp_new_str = ft_substr(str, 0, tmp_str - str);
			if (!*tmp_new_str)
				return (ft_free_all(tmp_new_str), NULL);
			str = tmp_str;
			tmp_new_str++;
		}
	}
	*tmp_new_str = NULL;
	return (new_str);
}

static int	ft_count_words(const char *str, char separator)
{
	int	count;

	count = 0;
	while (*str)
	{
		while (*str == separator)
			str++;
		if (*str)
			count++;
		while (*str && *str != separator)
			str++;
	}
	return (count);
}

/**
 * Splits a string into an array of substrings based on a delimiter character.
 *
 * @param s The string to be split.
 * @param c The delimiter character.
 * @return An array of substrings, or NULL if memory allocation fails.
 */
char	**ft_split(const char *s, char c)
{
	char	**new_str;

	if ((!s && (c == ' ')))
		return (NULL);
	new_str = (char **)malloc((ft_count_words(s, c) + 1) * sizeof(char *));
	if (!new_str)
		return (NULL);
	new_str = ft_allocate(new_str, s, c);
	return (new_str);
}
