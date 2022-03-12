/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_is_sort.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhaddaou <mhaddaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/12 00:38:05 by mhaddaou          #+#    #+#             */
/*   Updated: 2022/03/12 15:14:05 by mhaddaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int check_is_sorted(t_stacks *stacks, int order)
{
    int i;
    int j;
    i = 0;
    if (order == sa)
    {
        while (i < stacks->size_a)
        {
            j = i + 1;
            while (j < stacks->size_a)
            {
                if (stacks->a[i] > stacks->a[j])
                    return (EXIT_FAILURE);
                j++;
            }
            i++;
        }
    }
    return (EXIT_SUCCESS);
    
}
