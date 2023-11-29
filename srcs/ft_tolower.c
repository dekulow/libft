/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dekulow <dekulow@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/29 22:06:08 by dekulow           #+#    #+#             */
/*   Updated: 2023/11/29 22:06:10 by dekulow          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

/**
 * Converts an uppercase letter to lowercase if possible.
 *
 * @param c The character to be converted.
 * @return The lowercase equivalent of the character if it is
 * an uppercase letter, otherwise returns the character itself.
 */
int	ft_tolower(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (c + 32);
	return (c);
}
