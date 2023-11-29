/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dekulow <dekulow@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/29 22:06:13 by dekulow           #+#    #+#             */
/*   Updated: 2023/11/29 22:06:14 by dekulow          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

/**
 * Converts a lowercase letter to its corresponding uppercase letter.
 *
 * This function takes a character as input and checks if
 * it is a lowercase letter.
 * If it is, it converts it to its corresponding uppercase letter by
 * subtracting 32 from its ASCII value.
 * If the input character is not a lowercase letter, it is returned as is.
 *
 * @param c The character to be converted.
 * @return The converted character.
 */
int	ft_toupper(int c)
{
	if (c >= 'a' && c <= 'z')
		return (c - 32);
	return (c);
}
