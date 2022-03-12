/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_element.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhaddaou <mhaddaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/12 00:15:59 by mhaddaou          #+#    #+#             */
/*   Updated: 2022/03/12 15:21:10 by mhaddaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void    push_swap_element(char **av, t_stacks *stacks)
{
    int size;
    int i;
    
    i = -1;
    size = len_argument(av);
    stacks->a = malloc (sizeof(int) * size);
    if (!stacks->a)
        return ;
    stacks->size_a = size;
    stacks->b = malloc (sizeof(int) * size);
    if (!stacks->b)
    {
        free(stacks->a);
        return ;
    }
    stacks->size_b = 0;
    while (++i < size)
        stacks->a[i] = ft_atoi(av[i]);
    check_repeat(stacks);
    if (check_is_sorted(stacks, sa) == EXIT_SUCCESS)
        err_hand(stacks, sorted);
    else
        push_and_swap(stacks);
}
