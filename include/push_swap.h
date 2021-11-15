/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mangarci <mangarci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 18:31:17 by mangarci          #+#    #+#             */
/*   Updated: 2021/11/08 18:39:23 by mangarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
#define PUSH_SWAP_H

# include <unistd.h>
# include <stdlib.h>
# include <stdio.h>
# include "../lib/libft/libft.h"

# define MAX_INT "2147483647"
# define MIN_INT "-2147483648"

typedef struct s_stack
{
    int *stack;
    int len;
} s_stack;

#endif