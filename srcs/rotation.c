/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotation.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: manugarciasanchez <manugarciasanchez@st    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 21:17:54 by mangarci          #+#    #+#             */
/*   Updated: 2021/12/03 17:42:22 by mangarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

int	ra(t_stack *a)
{
	int	i;
	int	aux;

	if (!a->len)
		return (0);
	i = 0;
	aux = a->stack[0];
	while (i < a->len - 1)
	{
		a->stack[i] = a->stack[i + 1];
		i++;
	}
	a->stack[i] = aux;
	printf("ra\n");
	return (1);
}

int	rb(t_stack *b)
{
	int	i;
	int	aux;

	if (!b->len)
		return (0);
	i = 0;
	aux = b->stack[0];
	while (i < b->len - 1)
	{
		b->stack[i] = b->stack[i + 1];
		i++;
	}
	b->stack[i] = aux;
	printf("rb\n");
	return (1);
}

int	rr(t_stack *a, t_stack *b)
{
	if (!ra(a) && !rb(b))
		return (0);
	return (1);
}
