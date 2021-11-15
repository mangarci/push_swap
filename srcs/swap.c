/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mangarci <mangarci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 20:43:15 by mangarci          #+#    #+#             */
/*   Updated: 2021/11/08 20:50:46 by mangarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

int sa(s_stack *a)
{
    int aux;
    if (a->len <= 1 || !*a->stack)
        return (0);
    aux = a->stack[0];
    a->stack[0] = a->stack[1];
    a->stack[1] = aux;
    print("sa\n");
    return (1);
}

int sb(s_stack *b)
{
    int aux;
    if (b->len <= 1 || !*b->stack)
        return(0);
    aux = b->stack[0];
    b->stack[0] = b->stack[1];
    b->stack[1] = aux;
    print("sb\n");
    return (1);
}

int ss(s_stack *a, s_stack *b)
{
    if (sa(a) || sb(b))
        print("ss\n");
    return (1);
}