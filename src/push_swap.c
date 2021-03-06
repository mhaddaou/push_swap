/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhaddaou <mhaddaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/12 00:08:52 by mhaddaou          #+#    #+#             */
/*   Updated: 2022/03/18 20:51:20 by mhaddaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int	main(int ac, char **av)
{
	t_stacks	stacks;

	if (ac > 1)
	{
		av ++;
		if (ac == 2)
			av = ft_split(*av, ' ');
		if (check_argument(ac, av) == EXIT_FAILURE)
			return (EXIT_FAILURE);
		push_swap_element(av, &stacks);
	}
	return (EXIT_SUCCESS);
}
