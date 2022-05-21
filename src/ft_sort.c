/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhaddaou <mhaddaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/15 23:00:41 by mhaddaou          #+#    #+#             */
/*   Updated: 2022/03/19 02:57:05 by mhaddaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	ft_sb(t_stacks *stacks)
{
	int	temp;

	temp = stacks->b[0];
	stacks->b[0] = stacks->b[1];
	stacks->b[1] = temp;
	ft_printf("sb\n");
}

void	ft_rrb(t_stacks *stacks)
{
	int	temp;
	int	i;

	if (stacks->size_b == 0)
		return ;
	i = stacks->size_b - 1;
	temp = stacks->b[i];
	while (i)
	{
		stacks->b[i] = stacks->b[i - 1];
		i--;
	}
	stacks->b[0] = temp;
	ft_printf("rrb\n");
}

void	ft_rb(t_stacks *stacks)
{
	int	temp;
	int	i;

	if (stacks->size_b == 0)
		return ;
	i = 0;
	temp = stacks->b[0];
	while (i < stacks->size_b)
	{
		stacks->b[i] = stacks->b[i + 1];
		i++;
	}
	stacks->b[stacks->size_b - 1] = temp;
	ft_printf("rb\n");
}
