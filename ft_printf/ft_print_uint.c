/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_uint.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dekulow <dekulow@42.student.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/21 15:15:30 by dekulow           #+#    #+#             */
/*   Updated: 2024/02/23 15:05:58 by dekulow          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

/**
 * Prints an unsigned integer.
 *
 * @param num The unsigned integer to be printed.
 * @return The number of characters printed.
 */
t_ui	ft_print_uint(t_ui num)
{
	if (num == 0)
		return (ft_putstr_new("0\0"));
	return (ft_utoa(num));
}
