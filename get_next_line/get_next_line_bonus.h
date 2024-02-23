/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_bonus.h                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dekulow <dekulow@42.student.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/14 17:30:58 by dekulow           #+#    #+#             */
/*   Updated: 2024/02/23 14:15:29 by dekulow          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_BONUS_H
# define GET_NEXT_LINE_BONUS_H

/* ************************************************************************** */
/*									MACROS									  */
/* ************************************************************************** */

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 1
# endif

# define MAX_FD 4096

/* ************************************************************************** */
/*									INCLUDES								  */
/* ************************************************************************** */

# include <stdlib.h>
# include <unistd.h>

/* ************************** HEADER FILES (EXT) **************************** */

# include "../libft.h"

// --- REMOVE OR COMMENT (INCLUDES FOR MAIN FUNC) --- //
//# include <stdio.h>
//# include <fcntl.h>
// --- REMOVE OR COMMENT (INCLUDES FOR MAIN FUNC) --- //

/* ************************************************************************** */
/*									PROTOTYPES								  */
/* ************************************************************************** */

char	*get_next_line(int fd);

/* ************************ GET_NEXT_LINE_UTILS_BONUS *********************** */

char	*ft_strchr_new(const char *s, int c);
char	*ft_strjoin_new(char const *s1, char const *s2);

#endif
