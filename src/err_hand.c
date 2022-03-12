/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   err_hand.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhaddaou <mhaddaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/12 00:29:10 by mhaddaou          #+#    #+#             */
/*   Updated: 2022/03/12 18:57:34 by mhaddaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int err_hand(t_stacks *stacks, int err)
{
    if (err == 1)
    {
        free(stacks->a);
        free(stacks->b);
        ft_putstr_fd("Error\n", 2);
    }
    if (err == sorted)
    {
        free(stacks->a);
        free(stacks->b);
        printf("is sorted\n");
    }
    return (EXIT_SUCCESS);
}
