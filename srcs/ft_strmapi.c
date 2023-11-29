/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dekulow <dekulow@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/29 22:01:53 by dekulow           #+#    #+#             */
/*   Updated: 2023/11/29 22:01:53 by dekulow          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

/**
 * Applies a function to each character of a string and creates a new string
 * with the results.
 *
 * @param s The input string.
 * @param f The function to apply to each character.
 * @return The new string created by applying the function to each character,
 * or NULL if either the input string or the function is NULL, or if
 * memory allocation fails.
 */
char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*dst;
	int		i;

	i = 0;
	if (!s || !f)
		return (NULL);
	dst = (char *)malloc(sizeof(char) * (ft_strlen(s) + 1));
	if (dst == NULL)
		return (NULL);
	while (s[i] != '\0')
	{
		dst[i] = (*f)(i, s[i]);
		i++;
	}
	dst[i] = '\0';
	return (dst);
}
