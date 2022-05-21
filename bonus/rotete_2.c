/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotete_2.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhaddaou <mhaddaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/19 02:04:38 by mhaddaou          #+#    #+#             */
/*   Updated: 2022/03/19 03:07:25 by mhaddaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/checker.h"

void	ft_sb_checker(t_stacks *stacks)
{
	int	temp;

	temp = stacks->b[0];
	stacks->b[0] = stacks->b[1];
	stacks->b[1] = temp;
}

void	ft_rrb_checker(t_stacks *stacks)
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
}

void	ft_rb_checker(t_stacks *stacks)
{
	int	temp;
	int	i;

	i = 0;
	temp = stacks->b[0];
	while (i < stacks->size_b)
	{
		stacks->b[i] = stacks->b[i + 1];
		i++;
	}
	stacks->b[stacks->size_b - 1] = temp;
}

void	ft_sa_checker(t_stacks *stacks)
{
	int	temp;

	temp = stacks->a[0];
	stacks->a[0] = stacks->a[1];
	stacks->a[1] = temp;
}

void	ft_rrr_checker(t_stacks *stacks)
{
	ft_rra_checker(stacks);
	ft_rrb_checker(stacks);
}
