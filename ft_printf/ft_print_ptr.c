/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_ptr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dekulow <dekulow@42.student.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/17 11:04:16 by dekulow           #+#    #+#             */
/*   Updated: 2024/02/23 14:41:47 by dekulow          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

t_ui	ft_convert_hex(t_ul number);

t_ui	ft_print_ptr(long ptr)
{
	if (ptr == 0)
		return (ft_putstr_new("(nil)"));
	return (ft_convert_hex((t_ul)(ptr)));
}

t_ui	ft_convert_hex(t_ul number)
{
	t_ul	rest;
	char	hex[17];
	int		index;

	index = 16;
	hex[index] = '\0';
	if (number == 0)
		return (ft_putstr_new("0x0"));
	while (number != 0)
	{
		rest = (number % 16);
		if (rest < 10)
			hex[--index] = (char)('0' + rest);
		else
			hex[--index] = (char)('a' + (rest - 10));
		number /= 16;
	}
	return (ft_printf("0x%s", &hex[index]));
}
/*
int	main(void)
{
	ft_print_ptr(LONG_MAX);
	ft_print_ptr(LONG_MIN);
	ft_print_ptr(ULONG_MAX);
	ft_print_ptr(-ULONG_MAX);
	return (0);
}*/
