/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_int.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dekulow <dekulow@42.student.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/17 15:23:42 by dekulow           #+#    #+#             */
/*   Updated: 2024/02/23 15:05:11 by dekulow          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

/**
 * Prints an integer value.
 *
 * @param num The integer value to be printed.
 * @return The number of characters printed.
 */
t_ui	ft_print_int(int num)
{
	return (ft_itoa_new(num));
}
