/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhaddaou <mhaddaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/17 20:07:04 by mhaddaou          #+#    #+#             */
/*   Updated: 2022/03/19 02:10:23 by mhaddaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/checker.h"

int	main(int ac, char **av)
{
	t_stacks	stacks;

	if (ac > 1)
	{
		av++;
		if (ac == 2)
			av = ft_split(*av, ' ');
		if (check_argument(ac, av) == EXIT_FAILURE)
			return (EXIT_FAILURE);
		push_element(&stacks, av);
	}
	return (EXIT_SUCCESS);
}
