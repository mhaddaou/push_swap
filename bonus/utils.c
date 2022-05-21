/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhaddaou <mhaddaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/17 22:10:12 by mhaddaou          #+#    #+#             */
/*   Updated: 2022/03/19 02:18:45 by mhaddaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/checker.h"

int	check_repeat_checker(t_stacks *stacks)
{
	int	i;
	int	j;

	i = 0;
	while (i < stacks->size_a - 1)
	{
		j = i + 1;
		while (j < stacks->size_a)
		{
			if (stacks->a[i] == stacks->a[j])
				return (EXIT_FAILURE);
			j++;
		}
		i++;
	}
	return (EXIT_SUCCESS);
}

int	check_is_sorted_checker(t_stacks *stacks, int order)
{
	int	i;
	int	j;

	i = 0;
	if (order == SA)
	{
		while (i < stacks->size_a)
		{
			j = i + 1;
			while (j < stacks->size_a)
			{
				if (stacks->a[i] > stacks->a[j])
					return (EXIT_FAILURE);
				j++;
			}
			i++;
		}
	}
	return (EXIT_SUCCESS);
}
