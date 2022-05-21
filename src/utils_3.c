/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils_3.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhaddaou <mhaddaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/19 00:17:51 by mhaddaou          #+#    #+#             */
/*   Updated: 2022/03/19 03:15:30 by mhaddaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int	get_min_value(int *arr, int len)
{
	int	min;
	int	i;

	i = 0;
	min = arr[0];
	while (i < len)
	{
		if (min > arr[i])
			min = arr[i];
		i++;
	}
	return (min);
}

int	get_i(t_stacks *stacks, int min)
{
	int	i;

	i = 0;
	while (i < stacks->size_a)
	{
		if (stacks->a[i] == min)
			break ;
		i++;
	}
	return (i);
}

int	get_j(t_stacks *stacks, int min)
{
	int	j;
	int	len;

	len = stacks->size_a - 1;
	j = 1;
	while (len)
	{
		if (stacks->a[len] == min)
			break ;
		len--;
		j++;
	}
	return (j);
}

void	ft_pa_p(t_stacks *stacks, int len)
{
	while (len)
	{
		ft_pa(stacks);
		len--;
	}
}
