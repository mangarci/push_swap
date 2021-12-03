/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   short_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: manugarciasanchez <manugarciasanchez@st    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/16 18:45:41 by manugarcias       #+#    #+#             */
/*   Updated: 2021/12/03 13:55:39 by manugarcias      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

int	in_order(t_stack *a)
{
	int	i;

	i = 0;
	while (i < a->len - 1)
	{
		if (a->stack[i] > a->stack[i + 1])
			return (0);
		i++;
	}
	return (1);
}

void	three_sort(t_stack *a)
{
	while (!in_order(a))
	{
		if (a->stack[0] > a->stack[1] && a->stack[0] < a->stack[2]
				&& a->stack[1] < a->stack[2])
			sa(a);
		else if (a->stack[0] < a->stack[1] && a->stack[0] > a->stack[2]
				&& a->stack[1] > a->stack[2])
			rra(a);
		else if (a->stack[0] < a->stack[1] && a->stack[0] < a->stack[2]
				&& a->stack[1] > a->stack[2])
			rra(a);
		else if (a->stack[0] > a->stack[1] && a->stack[0] > a->stack[2]
				&& a->stack[1] < a->stack[2])
			ra(a);
		else if (a->stack[0] > a->stack[1] && a->stack[0] > a->stack[2]
				&& a->stack[1] > a->stack[2])
			sa(a);
	}
}

void	five_sort(t_stack *a, t_stack *b)
{
	int	i;
	int	n;

	if (in_order(a))
		return ;
	while (a->len > 3)
	{
		i = 0;
		n = a->stack[0];
		while (i < a->len - 1)
		{
			if (a->stack[i + 1] < n)
				n = a->stack[i + 1];
			i++;
		}
		while (a->stack[0] != n)
			ra(a);
		pb(a, b);
	}
	three_sort(a);
	pa(a, b);
	pa(a, b);
}

void	do_algorithm(t_stack *a, t_stack *b)
{
	if (a->len <= 3)
		three_sort(a);
	else if (a->len <= 5)
		five_sort(a, b);
	else if (a->len <= 50)
		selection_sort(a, b);
	else
		radix_sort(a, b);
}
