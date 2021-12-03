/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_rotation.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: manugarciasanchez <manugarciasanchez@st    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 21:26:45 by mangarci          #+#    #+#             */
/*   Updated: 2021/12/03 17:50:55 by mangarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

int	rra(t_stack *a)
{
	int	i;
	int	aux;

	if (!a->len)
		return (0);
	i = a->len - 1;
	aux = a->stack[a->len - 1];
	while (i > 0)
	{
		a->stack[i] = a->stack[i - 1];
		i--;
	}
	a->stack[0] = aux;
	printf("rra\n");
	return (1);
}

int	rrb(t_stack *b)
{
	int	i;
	int	aux;

	if (!b->len)
		return (0);
	i = b->len - 1;
	aux = b->stack[b->len - 1];
	while (i > 0)
	{
		b->stack[i] = b->stack[i - 1];
		i--;
	}
	b->stack[0] = aux;
	printf("rrb\n");
	return (1);
}

int	rrr(t_stack *a, t_stack *b)
{
	if (!rra(a) && !rrb(b))
		return (0);
	return (1);
}
