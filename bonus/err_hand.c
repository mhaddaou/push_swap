/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   err_hand.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhaddaou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/19 02:04:46 by mhaddaou          #+#    #+#             */
/*   Updated: 2022/03/19 02:04:47 by mhaddaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int	err_hand(t_stacks *stacks, int err)
{
	if (err == 1)
	{
		free(stacks->a);
		free(stacks->b);
		ft_putstr_fd("Error\n", 2);
	}
	if (err == SORTED)
	{
		free(stacks->a);
		free(stacks->b);
	}
	if (err == 3)
	{
		free(stacks->a);
		free(stacks->b);
	}
	exit (EXIT_SUCCESS);
}
