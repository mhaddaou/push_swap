/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sorte_more_than_more_element.c                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhaddaou <mhaddaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/17 04:06:36 by mhaddaou          #+#    #+#             */
/*   Updated: 2022/03/19 03:31:25 by mhaddaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	sorte_more_than_more_element(t_stacks *stacks)
{
	int	pivot;
	int	mid;
	int	i;

	i = 0;
	while (1)
	{
		if (stacks->size_a == 7)
			break ;
		pivot = meduime(stacks->a, stacks->size_a, BIGG);
		mid = get_mid(stacks->a, stacks->size_a, BIGG);
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
	sorte_five_element(stacks, mid, i);
	push_to_a(stacks);
}
