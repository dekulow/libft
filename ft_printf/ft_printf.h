/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dekulow <dekulow@42.student.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/22 12:38:11 by dekulow           #+#    #+#             */
/*   Updated: 2024/02/23 14:34:17 by dekulow          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

/* ************************************************************************** */
/*									INCLUDES								  */
/* ************************************************************************** */

# include <stdarg.h>
# include <stdlib.h>
# include <unistd.h>

/* ************************** HEADER FILES (EXT) **************************** */

# include "../libft.h"

/* -- REMOVE OR HIDE THIS INCLUDE -- */
//# include <stdio.h>
//# include <limits.h>
/* -- REMOVE OR HIDE THIS INCLUDE -- */

/* ************************************************************************** */
/*									TYPDEF									  */
/* ************************************************************************** */

typedef unsigned int		t_ui;
typedef unsigned long		t_ul;

/* ************************************************************************** */
/*									PROTOTYPES								  */
/* ************************************************************************** */

int		ft_printf(const char *str, ...);
t_ui	ft_print_hex(t_ui addr, t_ui is_upper);
t_ui	ft_print_ptr(long ptr);
t_ui	ft_print_int(int num);
t_ui	ft_print_uint(t_ui num);
t_ui	ft_putchar_new(char c);
t_ui	ft_putstr_new(char *s);
// int		ft_toupper(int c);
// int		ft_isalpha(int c);
// int		ft_strlen(const char *s);
t_ui	ft_itoa_new(int number);
t_ui	ft_utoa(t_ui n);
// size_t	ft_strlcpy(char *dst, const char *src, size_t size);
// void	*ft_memcpy(void *dest, const void *src, size_t len);

#endif
