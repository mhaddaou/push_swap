/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhaddaou <mhaddaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/17 20:08:38 by mhaddaou          #+#    #+#             */
/*   Updated: 2022/03/19 02:52:02 by mhaddaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHECKER_H
# define CHECKER_H

# include "push_swap.h"

void	push_element(t_stacks *stacks, char **av);
int		check_repeat_checker(t_stacks *stacks);
int		check_is_sorted_checker(t_stacks *stacks, int order);
void	ft_sb_checker(t_stacks *stacks);
void	ft_rrb_checker(t_stacks *stacks);
void	ft_rb_checker(t_stacks *stacks);
void	ft_sa_checker(t_stacks *stacks);
void	ft_rra_checker(t_stacks *stacks);
void	ft_ra_checker(t_stacks *stacks);
void	ft_pb_checker(t_stacks *stacks);
void	ft_pa_checker(t_stacks *stacks);
void	err_check(char *str, t_stacks *stacks);
void	check_what_ido(t_stacks *stacks);
void	ft_rrr_checker(t_stacks *stacks);

#endif
