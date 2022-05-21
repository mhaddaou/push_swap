/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_sort.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhaddaou <mhaddaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/16 03:52:02 by mhaddaou          #+#    #+#             */
/*   Updated: 2022/03/19 01:39:54 by mhaddaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	push_and_check(t_stacks *stacks, int pivot, int mid)
{
	if (pivot > stacks->a[0] && stacks->size_b && mid > stacks->a[0])
	{
		ft_pb(stacks);
		ft_rb(stacks);
	}
	else
		ft_pb(stacks);
}

int	check_is_not_down_pivote(t_stacks *stacks, int pivot)
{
	int	i;

	i = 0;
	while (i < stacks->size_a)
	{
		if (stacks->a[i] < pivot)
			return (EXIT_SUCCESS);
		i++;
	}
	return (EXIT_FAILURE);
}

void	push_to_a(t_stacks *stacks)
{
	int	max;
	int	i;
	int	j;

	while (stacks->size_b)
	{
		max = get_max_value(stacks);
		i = get_len_i(stacks, max);
		j = get_len_j(stacks, max);
		if (i < j)
			ft_push_rb(stacks, i);
		else if (i == j)
			ft_push_rb(stacks, i);
		else
			ft_push_rrb(stacks, j);
	}	
}

void	get_sort(t_stacks *stacks)
{
	int	pivot;
	int	mid;
	int	i;

	i = 0;
	while (1)
	{	
		if (stacks->size_a == 2)
			break ;
		pivot = meduime(stacks->a, stacks->size_a, SMALL);
		mid = get_mid(stacks->a, stacks->size_a, SMALL);
		while (1)
		{
			if (check_is_not_down_pivote(stacks, pivot) == EXIT_FAILURE)
				break ;
			if (pivot > stacks->a[0])
				push_and_check(stacks, pivot, mid);
			else
				ft_ra(stacks);
		}
	}
	whatdid(stacks);
	push_to_a(stacks);
}
