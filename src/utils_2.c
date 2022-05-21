/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils_2.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhaddaou <mhaddaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/18 22:14:42 by mhaddaou          #+#    #+#             */
/*   Updated: 2022/03/18 23:15:34 by mhaddaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	ft_push_rb(t_stacks *stacks, int i)
{
	while (i)
	{
		ft_rb(stacks);
		i--;
	}
	ft_pa(stacks);
}

void	ft_push_rrb(t_stacks *stacks, int j)
{
	while (j)
	{
		ft_rrb(stacks);
		j--;
	}
	ft_pa(stacks);
}

void	whatdid(t_stacks *stacks)
{
	if (stacks->a[0] > stacks->a[1])
	{
		ft_sa(stacks);
		ft_pb(stacks);
	}
	else
		ft_pb(stacks);
}
