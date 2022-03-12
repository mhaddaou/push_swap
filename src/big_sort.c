/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   big_sort.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhaddaou <mhaddaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/12 20:45:09 by mhaddaou          #+#    #+#             */
/*   Updated: 2022/03/12 20:49:45 by mhaddaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void    get_list_true_false(t_stacks *stacks)
{
    stacks->true_or_false = malloc (sizeof(int) * stacks->size_a);
    if (!stacks->true_or_false)
        err_hand(stacks, sorted);
    int i = 0;
    
}
