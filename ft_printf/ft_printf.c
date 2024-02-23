/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dekulow <dekulow@42.student.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/17 11:04:30 by dekulow           #+#    #+#             */
/*   Updated: 2024/02/23 15:06:18 by dekulow          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int			ft_printf(const char *format, ...);
static t_ui	ft_print_format(const char *format, va_list args);

/**
 * @brief Prints formatted output to the standard output stream.
 *
 * This function takes a format string and a variable number of arguments and
 * prints the formatted output to the standard output stream. The format string
 * can contain format specifiers that are replaced by the corresponding argument
 * values.
 *
 * @param format The format string specifying the output format.
 * @param ...    The variable number of arguments to be formatted and printed.
 *
 * @return The total number of characters printed, or -1 if an error occurs.
 */
int	ft_printf(const char *format, ...)
{
	t_ui	len;
	va_list	args;

	va_start(args, format);
	len = 0;
	if (!format)
		return (-1);
	while (*format)
	{
		if (*format == '%')
		{
			format++;
			len += ft_print_format(format, args);
		}
		else
		{
			ft_putchar_new(*format);
			len++;
		}
		format++;
	}
	va_end(args);
	return ((int)len);
}

static t_ui	ft_print_format(const char *format, va_list args)
{
	if (*format == 'c')
		return (ft_putchar_new(va_arg(args, int)));
	else if (*format == 's')
		return (ft_putstr_new(va_arg(args, char *)));
	else if (*format == '%')
		return (ft_putchar_new('%'));
	else if (*format == 'x')
		return (ft_print_hex(va_arg(args, t_ui), 0));
	else if (*format == 'X')
		return (ft_print_hex(va_arg(args, t_ui), 1));
	else if (*format == 'p')
		return (ft_print_ptr(va_arg(args, long)));
	else if (*format == 'i' || *format == 'd')
		return (ft_print_int(va_arg(args, int)));
	else if (*format == 'u')
		return (ft_print_uint(va_arg(args, t_ui)));
	else
	{
		ft_printf("%%");
		ft_printf("%c", *format);
		return (2);
	}
	return (0);
}

// int	main(void)
// {
// 	// ft_printf("Hello%c %s %%\n", ',', "world");
// 	// ft_printf("%x | %X\n", 42, 42);
// 	// ft_printf("%d | %i\n", 42, 42);
// 	// ft_printf("%u | %p\n", 42, 42);
// 	ft_printf("%u", -1);
// 	return (0);
// }
