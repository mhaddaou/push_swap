/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_more.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhaddaou <mhaddaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/14 23:49:25 by mhaddaou          #+#    #+#             */
/*   Updated: 2022/03/18 22:05:10 by mhaddaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int	check_sort(int *tab, int len)
{
	int	i;

	i = 0;
	while (i < len)
	{
		if (tab[i] > tab[i + 1])
			return (EXIT_FAILURE);
		i++;
	}
	return (EXIT_SUCCESS);
}
