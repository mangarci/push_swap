/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_rotation.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mangarci <mangarci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 21:26:45 by mangarci          #+#    #+#             */
/*   Updated: 2021/11/08 21:34:56 by mangarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

int rra(s_stack *a)
{
    int i;
    int aux;

    if (!a->stack[0])
        return (0);
    i = a->len - 1;
    aux = a->stack[a->len - 1];
    while (i > 0)
    {
        a->stack[i] = a->stack[i - 1];
        i--;
    }
    a->stack[0] = aux;
    print("rra\n");
    return (1);
}

int rrb(s_stack *b)
{
    int i;
    int aux;

    if (!b->stack[0])
        return (0);
    i = b->len - 1;
    aux = b->stack[b->len - 1];
    while (i > 0)
    {
        b->stack[i] = b->stack[i -1];
        i--;
    }
    b->stack[0] = aux;
    print("rrb\n");
    return (1);
}

int rrr(s_stack *a, s_stack *b)
{
    if (!rra(a) && !rrb(b))
        return (0);
    return (1);
}