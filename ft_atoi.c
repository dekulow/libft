/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dekulow <dekulow@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/29 21:54:31 by dekulow           #+#    #+#             */
/*   Updated: 2023/12/06 11:19:40 by dekulow          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * Converts a string to an integer.
 *
 * This function converts a string to an integer by skipping leading whitespace
 * characters, checking for an optional sign, and converting consecutive digits
 * until a non-digit character is encountered. The resulting integer is
 * multiplied by the sign and returned.
 *
 * @param nptr The string to be converted.
 * @return The converted integer value.
 */
int	ft_atoi(const char *nptr)
{
	char	*cnptr;
	int		sign;
	int		result;

	cnptr = (char *) nptr;
	while ((*cnptr >= 9 && *cnptr <= 13) || *cnptr == ' ')
		cnptr++;
	sign = 1;
	if (*cnptr == '-' || *cnptr == '+')
	{
		if (*cnptr == '-')
			sign *= -1;
		cnptr++;
	}
	result = 0;
	while (*cnptr >= '0' && *cnptr <= '9')
	{
		result = result * 10 + (*cnptr - 48);
		cnptr++;
	}
	if (sign != 0)
		return (result * sign);
	return (result);
}
