/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mangarci <mangarci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 22:38:40 by mangarci          #+#    #+#             */
/*   Updated: 2021/11/08 22:45:30 by mangarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

int lenght(int *a)
{
    int i;
    
    i = 0;
    if (!a)
        return (-1);
    while (a[i] != '\0')
        i++;
    return (i);
}

void    print(char *c)
{
    write(1, c, ft_strlen(c));
}

void    init_b(s_stack *b)
{
    b->len = 0;
    b->stack = NULL;
}

int main(int argc, char **argv)
{
    s_stack a;
    s_stack b;
    char **num;

    num = throw_errors(argc, argv);
    format(num, &a, argc);
    init_b(&b);
    free(a.stack);
    free(b.stack);
    return (0);
}