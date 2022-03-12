/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_and_swap.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhaddaou <mhaddaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/12 15:19:13 by mhaddaou          #+#    #+#             */
/*   Updated: 2022/03/12 20:43:40 by mhaddaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void    push_and_swap(t_stacks *stacks)
{
    if (stacks->size_a == 1)
        err_hand(stacks, sorted);
    if (stacks->size_a == 2)
        ft_sa(stacks);
    if (stacks->size_a == 3)
        sort_three_element(stacks);
    // if (stacks->size_a == 5)
    //     sort_five_element(stacks);
    else
        sort_more_element(stacks);
}
