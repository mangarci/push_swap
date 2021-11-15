/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   format.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mangarci <mangarci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 19:39:27 by mangarci          #+#    #+#             */
/*   Updated: 2021/11/15 14:23:37 by mangarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

int check_max_int(char *num, int n)
{
    if (num[0] != '-' && num[1] != '1' && ft_atoi(num) == -1)
        print_error();
    return (0);
}

int check_min_int(char *num, int n)
{
    if (num[0] != '0' && !ft_atoi(num))
        print_error();
    return (0);
}

void    format(char **num, s_stack *a, int argc)
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
