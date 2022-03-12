/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_repeat.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhaddaou <mhaddaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/12 00:25:47 by mhaddaou          #+#    #+#             */
/*   Updated: 2022/03/12 00:32:55 by mhaddaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void    check_repeat(t_stacks *stacks)
{
    int i;
    int j;

    i = 0;
    while (i < stacks->size_a)
    {
        j = i + 1;
        while (j < stacks->size_a)
        {
            if (stacks->a[i] == stacks->a[j])
                err_hand(stacks, 1);
            j++;
        }
        i++;
    }
}
