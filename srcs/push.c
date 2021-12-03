/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: manugarciasanchez <manugarciasanchez@st    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 20:51:49 by mangarci          #+#    #+#             */
/*   Updated: 2021/12/03 17:49:04 by mangarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

void	new_stack(t_stack *new_a, t_stack *new_b, t_stack *a, t_stack *b)
{
	int	i;

	i = 0;
	while (i < new_a->len)
	{
		new_a->stack[i] = a->stack[i + 1];
		i++;
	}
	i = 1;
	while (i < new_b->len)
	{
		new_b->stack[i] = b->stack[i - 1];
		i++;
	}
}

int	push(t_stack *a, t_stack *b)
{
	t_stack	new_a;
	t_stack	new_b;

	if (!a->len)
		return (0);
	new_b.stack = (int *)malloc(sizeof(int) * (b->len + 1));
	new_b.stack[0] = a->stack[0];
	new_b.len = b->len + 1;
	new_a.len = a->len - 1;
	new_a.stack = (int *)malloc(sizeof(int) * (new_a.len));
	new_stack(&new_a, &new_b, a, b);
	free(a->stack);
	free(b->stack);
	*a = new_a;
	*b = new_b;
	return (1);
}

int	pa(t_stack *a, t_stack *b)
{
	int	aux;

	aux = push(b, a);
	if (aux)
		printf("pa\n");
	return (aux);
}

int	pb(t_stack *a, t_stack *b)
{
	int	aux;

	aux = push(a, b);
	if (aux)
		printf("pb\n");
	return (aux);
}
