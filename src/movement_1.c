/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   movement_1.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhaddaou <mhaddaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/18 22:01:14 by mhaddaou          #+#    #+#             */
/*   Updated: 2022/03/19 02:45:06 by mhaddaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	ft_pb(t_stacks *stacks)
{
	int	i;
	int	tmp;

	i = 0;
	tmp = stacks->a[0];
	while (i < stacks->size_a)
	{
		stacks->a[i] = stacks->a[i + 1];
		i++;
	}
	i = stacks->size_b;
	if (!stacks->size_b)
		stacks->b[0] = tmp;
	else
	{
		while (i)
		{
			stacks->b[i] = stacks->b[i - 1];
			i--;
		}
		stacks->b[0] = tmp;
	}
	stacks->size_a--;
	stacks->size_b++;
	ft_printf("pb\n");
}

void	ft_pa(t_stacks *stacks)
{
	int	i;
	int	tmp;

	i = 0;
	tmp = stacks->b[0];
	while (i < stacks->size_b)
	{
		stacks->b[i] = stacks->b[i + 1];
		i++;
	}
	i = stacks->size_a;
	if (!stacks->size_a)
		stacks->a[0] = tmp;
	else
	{
		while (i)
		{
			stacks->a[i] = stacks->a[i - 1];
			i--;
		}
		stacks->a[0] = tmp;
	}
	stacks->size_a++;
	stacks->size_b--;
	ft_printf("pa\n");
}

void	ft_rrr(t_stacks *stacks)
{
	ft_rra(stacks);
	ft_rrb(stacks);
}
