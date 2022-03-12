/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_element.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhaddaou <mhaddaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/12 17:52:29 by mhaddaou          #+#    #+#             */
/*   Updated: 2022/03/12 18:46:15 by mhaddaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void    ft_sa(t_stacks *stacks)
{
    int temp;

    temp = stacks->a[0];
    stacks->a[0] = stacks->a[1];
    stacks->a[1] = temp;
    ft_printf("sa\n");
}
void    ft_rra(t_stacks *stacks)
{
    int temp;
    int i;
    
    i = stacks->size_a - 1;
    temp = stacks->a[i];
    while (i)
    {
        stacks->a[i] = stacks->a[i - 1];
        i--;
    }
    stacks->a[0] = temp;
    ft_printf("rra\n");
}
void    ft_ra(t_stacks *stacks)
{
    int temp;
    int i ;
    i = 0;
    temp = stacks->a[0];
    while (i < stacks->size_a)
    {
        stacks->a[i] = stacks->a[i + 1];
        i++;
    }
    stacks->a[stacks->size_a - 1] = temp;
    ft_printf("ra\n");
}
