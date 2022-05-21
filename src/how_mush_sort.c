/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   how_mush_sort.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhaddaou <mhaddaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/12 17:59:49 by mhaddaou          #+#    #+#             */
/*   Updated: 2022/03/18 22:21:45 by mhaddaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	sort_three_element(t_stacks *a)
{
	if (a->a[0] < a->a[1] && a->a[1] > a->a[2] && a->a[0] < a->a[2])
	{
		ft_rra(a);
		ft_sa(a);
	}
	else if (a->a[0] < a->a[2] && a->a[0] > a->a[2] && a->a[1] > a->a[2])
	{
		ft_ra(a);
		ft_sa(a);
	}
	else if (a->a[0] > a->a[1] && a->a[0] < a->a[2] && a->a[1] < a->a[2])
		ft_sa(a);
	else if (a->a[0] < a->a[1] && a->a[1] > a->a[2] && a->a[0] > a->a[2])
		ft_rra(a);
	else if (a->a[0] > a->a[1] && a->a[0] > a->a[2] && a->a[1] > a->a[2])
	{
		ft_ra(a);
		ft_sa(a);
	}
	else if (a->a[0] > a->a[1] && a->a[0] > a->a[2] && a->a[1] < a->a[2])
		ft_ra(a);
}

void	sort_more_element(t_stacks *stacks)
{
	get_sort(stacks);
}
