/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhaddaou <mhaddaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/18 01:01:42 by mhaddaou          #+#    #+#             */
/*   Updated: 2022/03/19 02:15:50 by mhaddaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/checker.h"

void	ft_rra_checker(t_stacks *stacks)
{
	int	temp;
	int	i;

	i = stacks->size_a - 1;
	temp = stacks->a[i];
	while (i)
	{
		stacks->a[i] = stacks->a[i - 1];
		i--;
	}
	stacks->a[0] = temp;
}

void	ft_ra_checker(t_stacks *stacks)
{
	int	temp;
	int	i;

	i = 0;
	temp = stacks->a[0];
	while (i < stacks->size_a)
	{
		stacks->a[i] = stacks->a[i + 1];
		i++;
	}
	stacks->a[stacks->size_a - 1] = temp;
}

void	ft_pb_checker(t_stacks *stacks)
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
}

void	ft_pa_checker(t_stacks *stacks)
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
}
