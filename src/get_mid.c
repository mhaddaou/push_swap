/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_mid.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhaddaou <mhaddaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/18 22:08:01 by mhaddaou          #+#    #+#             */
/*   Updated: 2022/03/19 01:38:37 by mhaddaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int	get_mid(int *tab, int len, int order)
{
	int	mid;
	int	*arr;
	int	exploit;

	if (order == SMALL)
		exploit = 2;
	else
		exploit = 7;
	arr = malloc(sizeof(int) * len);
	arr = copy_element(tab, arr, len);
	arr = ft_sort(arr, len);
	len /= 2;
	mid = arr[len / exploit];
	free(arr);
	return (mid);
}
