/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_argument.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhaddaou <mhaddaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/17 21:48:16 by mhaddaou          #+#    #+#             */
/*   Updated: 2022/03/19 02:32:20 by mhaddaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	check_argument(int ac, char **av)
{
	int		i;
	int		len;
	char	*str;

	i = 0;
	len = ac -1;
	while (i < len)
	{
		str = av[i];
		if (check_is_int(str) == EXIT_FAILURE)
			return (EXIT_FAILURE);
		i++;
	}
	return (EXIT_SUCCESS);
}
