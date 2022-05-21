/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhaddaou <mhaddaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/12 00:08:09 by mhaddaou          #+#    #+#             */
/*   Updated: 2022/03/19 03:28:41 by mhaddaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# define SA (1)
# define SORTED (0)
# define SMALL (0)
# define BIGG (1)

# include "../library/library.h"
# include <stdbool.h>

typedef struct s_stacks
{
	int	size_a;
	int	*a;
	int	size_b;
	int	*b;
}	t_stacks;

void	push_swap_element(char **av, t_stacks *stacks);
int		check_repeat(t_stacks *stacks);
int		err_hand(t_stacks *stacks, int err);
int		check_is_sorted(t_stacks *stacks, int order);
void	push_and_swap(t_stacks *stacks);
void	ft_sa(t_stacks *stacks);
void	sort_three_element(t_stacks *a);
void	ft_rra(t_stacks *stacks);
void	ft_ra(t_stacks *stacks);
void	sort_more_element(t_stacks *stacks);
void	ft_pb(t_stacks *stacks);
void	ft_pa(t_stacks *stacks);
void	sort_more(t_stacks *stacks);
int		check_more_than_pivot(t_stacks *stacks, int pivot);
int		*ft_sort(int *arr, int len);
void	ft_sb(t_stacks *stacks);
void	ft_rrb(t_stacks *stacks);
void	ft_rb(t_stacks *stacks);
void	get_sort(t_stacks *stacks);
void	sorte_five_element(t_stacks *stacks, int min, int i);
int		get_len_j(t_stacks *stacks, int max);
int		get_len_i(t_stacks *stacks, int max);
int		*copy_element(int *tab, int *arr, int len);
void	sorte_more_than_more_element(t_stacks *stacks);
int		meduime(int *tab, int len, int order);
int		get_mid(int *tab, int len, int order);
int		check_is_not_down_pivote(t_stacks *stacks, int pivot);
void	push_and_check(t_stacks *stacks, int pivot, int mid);
void	push_to_a(t_stacks *stacks);
int		get_max_value(t_stacks *stacks);
int		get_len_i(t_stacks *stacks, int max);
int		get_len_j(t_stacks *stacks, int max);
void	ft_push_rb(t_stacks *stacks, int i);
void	ft_push_rrb(t_stacks *stacks, int j);
void	push_to_a(t_stacks *stacks);
void	whatdid(t_stacks *stacks);
int		get_min_value(int *arr, int len);
int		get_i(t_stacks *stacks, int min);
int		get_j(t_stacks *stacks, int min);
void	ra_and_push(t_stacks *stacks, int *len, int i);
void	ft_pa_p(t_stacks *stacks, int len);
void	ft_rrr(t_stacks *stacks);

#endif
