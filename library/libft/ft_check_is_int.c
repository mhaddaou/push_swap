/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_is_int.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhaddaou <mhaddaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/17 21:49:35 by mhaddaou          #+#    #+#             */
/*   Updated: 2022/03/19 02:31:02 by mhaddaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	check_is_int(char *str)
{
	int	i;
	int	len;

	i = 0;
	len = (int)ft_strlen(str);
	while (i < len)
	{
		if (ft_isdigit(str[i]) == EXIT_SUCCESS)
		{
			ft_putstr_fd("Error\n", 2);
			return (EXIT_FAILURE);
		}
		i++;
	}
	if (check_maxint(str) == EXIT_FAILURE)
		return (EXIT_FAILURE);
	return (EXIT_SUCCESS);
}
