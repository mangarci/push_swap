/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   format.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: manugarciasanchez <manugarciasanchez@st    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 19:39:27 by mangarci          #+#    #+#             */
/*   Updated: 2021/12/02 15:24:21 by manugarcias      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

int	stack_length(int *a)
{
	int	i;

	i = 0;
	if (!a)
		return (-1);
	while (a[i] != '\0')
		i++;
	return (i);
}

int check_max_int(char *num, int n)
{
    if ((num[0] != '-' || num[1] != '1') && n == -1)
        print_error();
    return (0);
}

int check_min_int(char *num, int n)
{
    if (num[0] != '0' && !n)
        print_error();
    return (0);
}

void    format(char **num, t_stack *a, int argc)
{
    int i;
    int len;
    int aux;

    if (argc == 2)
        aux = 0;
    else
        aux = 1;
    len = 0;
    i = aux;
    while (num[i++])
        len++;
    a->stack = (int *)malloc(sizeof(int) * (len));
    a->len = len;
    i = aux;
    while (num[i])
    {
		a->stack[i - aux] = ft_atoi(num[i]);
        check_max_int(num[i], a->stack[i - aux]);
        check_min_int(num[i], a->stack[i - aux]);
        i++;
    }
}
