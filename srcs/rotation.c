/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotation.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mangarci <mangarci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 21:17:54 by mangarci          #+#    #+#             */
/*   Updated: 2021/11/08 21:26:23 by mangarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

int ra(s_stack *a)
{
    int i;
    int aux;

    if (!a->stack[0])
        return (0);
    i = 0;
    aux = a->stack[0];
    while (i < a->len - 1)
    {
        a->stack[i] = a->stack[i + 1];
        i++;
    }
    a->stack[i] = aux;
    print("ra\n");
    return (1);
}

int rb(s_stack *b)
{
    int i;
    int aux;

    if (!b->stack[0])
        return (0);
    i = 0;
    aux = b->stack[0];
    while (i < b->len - 1)
    {
        b->stack[i] = b->stack[i + 1];
        i++;
    }
    b->stack[i] = aux;
    print("rb\n");
    return (1);
}

int rr(s_stack *a, s_stack *b)
{
    if (!ra(a) && !rb(b))
        return (0);
    return (1);
}