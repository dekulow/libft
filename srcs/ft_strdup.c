/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dekulow <dekulow@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/29 22:01:10 by dekulow           #+#    #+#             */
/*   Updated: 2023/11/29 22:01:11 by dekulow          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

/**
 * Duplicates a string.
 *
 * This function duplicates the string `s` by allocating memory for a
 * new string and copying the contents of `s` into it. The duplicated string
 * is terminated with a null character.
 *
 * @param   s   The string to be duplicated.
 * @return  A pointer to the duplicated string, or NULL if memory
 * allocation fails.
 */
char	*ft_strdup(const char *s)
{
	char	*cs;
	int		i;
	char	*cpy;

	cs = (char *)s;
	i = 0;
	cpy = (char *)malloc((ft_strlen(cs) + 1) * sizeof(char));
	if (cpy == NULL)
		return (NULL);
	while (s[i] != '\0')
	{
		cpy[i] = s[i];
		i++;
	}
	cpy[i] = '\0';
	return (cpy);
}
