/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_utils_int.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dekulow <dekulow@42.student.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/21 16:24:51 by dekulow           #+#    #+#             */
/*   Updated: 2024/02/23 15:03:05 by dekulow          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

t_ui	ft_convert_itoa(t_ui n, t_ui is_negative)
{
	char	buffer[10];
	char	tmp;
	int		index;
	int		j;

	index = 0;
	while (n != 0)
	{
		buffer[index++] = ((n % 10) + '0');
		n /= 10;
	}
	if (is_negative == 1)
		buffer[index++] = '-';
	buffer[index] = '\0';
	j = 0;
	while (j < (index / 2))
	{
		tmp = buffer[j];
		buffer[j] = buffer[index - 1 - j];
		buffer[index - 1 - j] = tmp;
		j++;
	}
	return (ft_putstr_new(buffer));
}

/**
 * Converts & print an integer to a string representation.
 *
 * @param number The integer to be converted.
 * @return The number of characters printed.
 */
t_ui	ft_itoa_new(int number)
{
	if (number == 0)
		return (ft_putstr_new("0\0"));
	else if (number == -2147483648)
		return (ft_putstr_new("-2147483648"));
	if (number < 0)
		return (ft_convert_itoa((number * -1), 1));
	return (ft_convert_itoa(number, 0));
}

/**
 * Converts & print an unsigned integer to a string representation.
 *
 * @param n The unsigned integer to convert.
 * @return The number of characters printed.
 */
t_ui	ft_utoa(t_ui n)
{
	char	buffer[10];
	char	tmp;
	int		index;
	int		j;

	index = 0;
	while (n != 0)
	{
		buffer[index++] = ((n % 10) + '0');
		n /= 10;
	}
	buffer[index] = '\0';
	j = 0;
	while (j < (index / 2))
	{
		tmp = buffer[j];
		buffer[j] = buffer[index - 1 - j];
		buffer[index - 1 - j] = tmp;
		j++;
	}
	return (ft_putstr_new(buffer));
}
