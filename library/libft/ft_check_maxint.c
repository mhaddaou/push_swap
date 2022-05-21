/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_maxint.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhaddaou <mhaddaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/17 21:50:49 by mhaddaou          #+#    #+#             */
/*   Updated: 2022/03/19 02:29:58 by mhaddaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	check_maxint(char *str)
{
	int		i;
	long	nbr;
	char	*s;

	i = 0;
	nbr = ft_atoi(str);
	s = ft_itoa(nbr);
	while (s[i])
	{
		if (s[i] != str[i])
		{
			ft_putstr_fd("Error\n", 2);
			return (EXIT_FAILURE);
		}
		i++;
	}
	return (EXIT_SUCCESS);
}
