/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_five_element.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhaddaou <mhaddaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/17 00:30:33 by mhaddaou          #+#    #+#             */
/*   Updated: 2022/03/19 03:28:49 by mhaddaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	ft_ra_and_push(t_stacks *stacks, int i)
{
	while (i)
	{
		ft_ra(stacks);
		i--;
	}
	ft_pb(stacks);
}

void	ft_rra_and_push(t_stacks *stacks, int j)
{
	while (j)
	{
		ft_rra(stacks);
		j--;
	}
	ft_pb(stacks);
}

void	sorte_five_element(t_stacks *stacks, int min, int i)
{
	int	j;
	int	len;

	len = 0;
	while (1)
	{
		if (stacks->size_a == 3)
			break ;
		min = get_min_value(stacks->a, stacks->size_a);
		i = get_i(stacks, min);
		j = get_j(stacks, min);
		if (i == j || i < j)
		{
			ft_ra_and_push(stacks, i);
			len++;
		}
		else
		{
			ft_rra_and_push(stacks, j);
			len++;
		}
	}
	sort_three_element(stacks);
	ft_pa_p(stacks, len);
}
