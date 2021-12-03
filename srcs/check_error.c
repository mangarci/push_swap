/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_error.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mangarci <mangarci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 18:40:37 by mangarci          #+#    #+#             */
/*   Updated: 2021/12/03 17:55:29 by mangarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

int	print_error(void)
{
	write(2, "Error", ft_strlen("Error"));
	exit(EXIT_FAILURE);
}

void	check_digit(char *num)
{
	int	j;

	j = 0;
	while (num[j])
	{
		if (ft_isdigit(num[j]) || (num[j] == '-' && !j))
			j++;
		else
			print_error();
	}
}

int	is_repeated(char **num, int i, int aux)
{
	int	j;
	int	len;
	int	len2;

	len = ft_strlen(num[i]);
	j = i - 1;
	while (j >= aux)
	{
		len2 = ft_strlen(num[j]);
		if (!ft_strncmp(num[i], num[j], len) && len == len2)
			return (1);
		j--;
	}
	return (0);
}

char	**check_error(int argc, char **argv)
{
	int		i;
	int		aux;
	char	**num;

	i = 1;
	aux = 1;
	if (argc == 2)
	{
		num = ft_split(argv[1], ' ');
		i = 0;
		aux = 0;
	}
	else
		num = argv;
	while (num[i])
	{
		check_digit(num[i]);
		if (is_repeated(num, i, aux))
			print_error();
		i++;
	}
	return (num);
}
