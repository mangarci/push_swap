/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   selection.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: manugarciasanchez <manugarciasanchez@st    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/16 18:58:52 by manugarcias       #+#    #+#             */
/*   Updated: 2021/12/02 12:26:17 by manugarcias      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

void	move_num(t_stack *a, int min, int index)
{
	while (a->stack[0] != min)
	{
		if (index < a->len / 2)
			ra(a);
		else
			rra(a);
	}
}

void	selection_sort(t_stack *a, t_stack *b)
{
	int	i;
	int	index;
	int	min;

	while (a->len && !in_order(a))
	{
		i = 0;
		min = __INT32_MAX__;
		while (i < a->len)
		{
			if (a->stack[i] < min)
			{
				min = a->stack[i];
				index = i;
			}
			i++;
		}
		move_num(a, min, index);
		pb(a, b);
	}
	while (b->len)
		pa(a, b);
}
