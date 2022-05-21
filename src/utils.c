/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhaddaou <mhaddaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/18 22:09:00 by mhaddaou          #+#    #+#             */
/*   Updated: 2022/03/19 01:38:22 by mhaddaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int	get_max_value(t_stacks *stacks)
{
	int	max;
	int	i;

	i = 0;
	max = stacks->b[0];
	while (i < stacks->size_b)
	{
		if (max < stacks->b[i])
			max = stacks->b[i];
		i++;
	}
	return (max);
}

int	get_len_i(t_stacks *stacks, int max)
{
	int	i;

	i = 0;
	while (i < stacks->size_b)
	{
		if (stacks->b[i] == max)
			break ;
		i++;
	}
	return (i);
}

int	get_len_j(t_stacks *stacks, int max)
{
	int	j;
	int	len;

	len = stacks->size_b - 1;
	j = 1;
	while (len)
	{
		if (stacks->b[len] == max)
			break ;
		len--;
		j++;
	}
	return (j);
}

int	meduime(int *tab, int len, int order)
{
	int	pivot;
	int	*arr;
	int	exploit;

	if (order == SMALL)
		exploit = 2;
	else
		exploit = 7;
	arr = malloc (sizeof(int) * len);
	arr = copy_element(tab, arr, len);
	arr = ft_sort(arr, len);
	pivot = arr[len / exploit];
	free(arr);
	return (pivot);
}
