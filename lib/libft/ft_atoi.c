/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: manugarciasanchez <manugarciasanchez@st    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/07 16:28:58 by mangarci          #+#    #+#             */
/*   Updated: 2021/12/02 14:53:31 by manugarcias      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	is_negative(int negative)
{
	if (negative != 0)
	{
		return (-1);
	}
	else
	{
		return (1);
	}
}

int	ft_atoi(const char *str)
{
	long int	num;
	int			negative;

	num = 0;
	negative = 0;
	while (*str && (*str == ' ' || *str == '\n' || *str == '\t'
			|| *str == '\v' || *str == '\f' || *str == '\r'))
		++str;
	if (*str == '-' || *str == '+')
	{
		if (*str == '-')
			negative = -1;
		str++;
	}
	while (*str && ft_isdigit(*str))
	{
		num = num * 10 + *str - 48;
		if (num * is_negative(negative) > 2147483647)
			return (-1);
		if (num * is_negative(negative) < -2147483648)
			return (0);
		str++;
	}
	return ((int)(num * is_negative(negative)));
}
