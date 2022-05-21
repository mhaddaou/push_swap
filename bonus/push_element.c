/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_element.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhaddaou <mhaddaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/17 21:56:57 by mhaddaou          #+#    #+#             */
/*   Updated: 2022/03/19 03:06:49 by mhaddaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/checker.h"

void	err_check(char *str, t_stacks *stacks)
{
	if (!ft_strcmp("rrr\n", str))
	{
		ft_rrr_checker(stacks);
		return ;
	}
	if (!ft_strcmp("pa\n", str))
	{
		ft_pa_checker(stacks);
		return ;
	}
	else
	{
		free(str);
		ft_printf("Error\n");
		exit(EXIT_FAILURE);
	}
}

int	function_order(t_stacks *stacks)
{
	char	*str;

	str = get_next_line(0);
	while (str)
	{
		if (!ft_strcmp("rra\n", str))
			ft_rra_checker(stacks);
		else if (!ft_strcmp("ra\n", str))
			ft_ra_checker(stacks);
		else if (!ft_strcmp("sa\n", str))
			ft_sa_checker(stacks);
		else if (!ft_strcmp("rrb\n", str))
			ft_rra_checker(stacks);
		else if (!ft_strcmp("rb\n", str))
			ft_rb_checker(stacks);
		else if (!ft_strcmp("sb\n", str))
			ft_sb_checker(stacks);
		else if (!ft_strcmp("pb\n", str))
			ft_pb_checker(stacks);
		else
			err_check(str, stacks);
		str = get_next_line(0);
	}
	free(str);
	return (0);
}

void	check_what_ido(t_stacks *stacks)
{
	if (check_is_sorted_checker(stacks, SA) == EXIT_SUCCESS)
	{
		ft_printf("OK\n");
		err_hand(stacks, SORTED);
	}
	else
	{
		ft_printf("KO\n");
		err_hand(stacks, SORTED);
	}	
}

void	push_element(t_stacks *stacks, char **av)
{
	int	size;
	int	i;

	i = -1;
	size = len_argument(av);
	stacks->a = malloc (sizeof(int) * size);
	if (!stacks->a)
		return ;
	stacks->size_a = size;
	stacks->b = malloc (sizeof(int) * size);
	if (!stacks->b)
		err_hand(stacks, 4);
	stacks->size_b = 0;
	while (++i < size)
		stacks->a[i] = ft_atoi(av[i]);
	if (check_repeat_checker(stacks) == EXIT_FAILURE)
		err_hand(stacks, 1);
	function_order(stacks);
	check_what_ido(stacks);
}
