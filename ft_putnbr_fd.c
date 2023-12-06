/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dekulow <dekulow@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/29 22:00:36 by dekulow           #+#    #+#             */
/*   Updated: 2023/11/29 22:00:38 by dekulow          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * Prints an integer to the specified file descriptor.
 *
 * This function prints the given integer `n` to the specified file
 * descriptor `fd`.
 * If the integer is -2147483648, it prints "-2147483648" directly.
 * Otherwise, it handles negative numbers by printing a '-' sign and
 * converting the number to positive.
 * It recursively divides the positive number by 10 until it becomes less
 * than 10, and then prints the remainder.
 *
 * @param n The integer to be printed.
 * @param fd The file descriptor to write the output to.
 */
void	ft_putnbr_fd(int n, int fd)
{
	if (n == -2147483648)
		write(fd, "-2147483648", 11);
	else
	{
		if (n < 0)
		{
			write(fd, "-", 1);
			n *= -1;
		}
		if (n > 9)
			ft_putnbr_fd(n / 10, fd);
		ft_putchar_fd(n % 10 + '0', fd);
	}
}
