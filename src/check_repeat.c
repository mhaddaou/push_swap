/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_repeat.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhaddaou <mhaddaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/12 00:25:47 by mhaddaou          #+#    #+#             */
/*   Updated: 2022/03/18 22:06:38 by mhaddaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int	check_repeat(t_stacks *stacks)
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
