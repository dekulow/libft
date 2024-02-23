/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_hex.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dekulow <dekulow@42.student.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/17 11:04:11 by dekulow           #+#    #+#             */
/*   Updated: 2024/02/23 14:41:27 by dekulow          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static void	ft_print(int len, char hex[], t_ui is_upper)
{
	int	index;

	index = len;
	while (index >= 0)
	{
		if (ft_isalpha(hex[index]) && ft_toupper(hex[index]) && (!is_upper))
			ft_putchar_new(hex[index] + 32);
		else
			ft_putchar_new(hex[index]);
		index--;
	}
}

t_ui	ft_print_hex(t_ui addr, t_ui is_upper)
{
	t_ui	rest;
	char	hex[17];
	t_ui	index;

	index = 0;
	if (addr == 0)
		return (ft_putchar_new('0'));
	while (addr != 0)
	{
		rest = (addr % 16);
		if (rest < 10)
			hex[index++] = (char)(rest + 48);
		else
			hex[index++] = (char)(rest + 55);
		addr = (addr / 16);
	}
	ft_print(index - 1, hex, is_upper);
	return (index);
}
