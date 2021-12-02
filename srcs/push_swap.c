/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: manugarciasanchez <manugarciasanchez@st    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/16 18:30:57 by manugarcias       #+#    #+#             */
/*   Updated: 2021/12/02 15:21:08 by manugarcias      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

void	init_b(t_stack *b)
{
	b->len = 0;
	b->stack = NULL;
}

int	main(int argc, char **argv)
{
	t_stack a;
	t_stack b;
	char	**num;

	num = check_error(argc, argv);
	format(num, &a, argc);
	init_b(&b);
	do_algorithm(&a, &b);
	free(a.stack);
	free(b.stack);
	return (0);
}
