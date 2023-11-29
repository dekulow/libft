/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dekulow <dekulow@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/29 21:59:38 by dekulow           #+#    #+#             */
/*   Updated: 2023/11/29 21:59:39 by dekulow          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

/**
 * Writes a character to the specified file descriptor.
 *
 * @param c The character to write.
 * @param fd The file descriptor to write to.
 */
void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}
