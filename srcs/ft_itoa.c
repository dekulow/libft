/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dekulow <dekulow@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/29 21:56:42 by dekulow           #+#    #+#             */
/*   Updated: 2023/11/29 21:56:44 by dekulow          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

static char	*ft_reverse_string(char *str)
{
	char	tmp;
	size_t	i;
	size_t	len;
	int		is_negative;

	len = ft_strlen(str);
	i = 0;
	is_negative = 0;
	if (len > 0 && str[0] == '-')
	{
		is_negative = 1;
		len--;
	}
	while (i < len / 2)
	{
		tmp = str[i + is_negative];
		str[i + is_negative] = str[len - i - 1 + is_negative];
		str[len - i - 1 + is_negative] = tmp;
		i++;
	}
	return (str);
}

static int	ft_intlen(int n)
{
	int	count;

	count = 0;
	if (n < 0)
	{
		n = -n;
		count++;
	}
	if (n == 0)
		count++;
	while (n != 0)
	{
		count++;
		n /= 10;
	}
	return (count);
}

static void	ft_convert(char *str, int n)
{
	int	i;

	i = 0;
	if (n < 0)
	{
		str[i] = '-';
		n *= -1;
		i++;
	}
	while (n != 0)
	{
		str[i] = ((n % 10) + '0');
		n /= 10;
		i++;
	}
	str[i] = '\0';
}

/**
 * Converts an integer to a string.
 *
 * This function converts an integer to a string by allocating memory for the
 * string, converting the integer, and returning the string.
 *
 * @param n The integer to be converted.
 * @return The converted string.
 */
char	*ft_itoa(int n)
{
	char	*str;

	if (n == 0)
	{
		str = (char *)malloc(2);
		if (str == NULL)
			return (NULL);
		str[0] = '0';
		str[1] = '\0';
		return (str);
	}
	if (n == -2147483648)
	{
		str = (char *)malloc(12);
		if (str == NULL)
			return (NULL);
		ft_strlcpy(str, "-2147483648", 12);
		return (str);
	}
	str = (char *)malloc(sizeof(char) * (ft_intlen(n) + 1));
	if (!str)
		return (NULL);
	ft_convert(str, n);
	return (ft_reverse_string(str));
}
