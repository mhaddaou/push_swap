/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_and_swap.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhaddaou <mhaddaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/12 15:19:13 by mhaddaou          #+#    #+#             */
/*   Updated: 2022/03/19 03:29:52 by mhaddaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	push_and_swap(t_stacks *stacks)
{
	int	min;
	int	i;

	if (stacks->size_a == 1)
		err_hand(stacks, SORTED);
	if (stacks->size_a == 2)
		ft_sa(stacks);
	if (stacks->size_a == 3)
		sort_three_element(stacks);
	if (stacks->size_a > 3 && stacks->size_a < 6)
		sorte_five_element(stacks, min, i);
	if (stacks->size_a > 5 && stacks->size_a <= 100)
		sort_more_element(stacks);
	if (stacks->size_a > 101)
		sorte_more_than_more_element(stacks);
	free(stacks->a);
	free(stacks->b);
}
