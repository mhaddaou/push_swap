/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhaddaou <mhaddaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/12 00:08:09 by mhaddaou          #+#    #+#             */
/*   Updated: 2022/03/12 20:46:27 by mhaddaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
#define PUSH_SWAP_H

# include "../library/library.h"
# define sa (1)
# define sorted (0)
typedef struct s_stacks
{
    int size_a;
    int *a;
    int size_b;
    int *b;
    int *true_or_false;
}   t_stacks;

void    push_swap_element(char **av, t_stacks *stacks);
int len_argument(char **av);
void    check_repeat(t_stacks *stacks);
int err_hand(t_stacks *stacks, int err);
int check_is_sorted(t_stacks *stacks, int order);
void    push_and_swap(t_stacks *stacks);
void    ft_sa(t_stacks *stacks);
void sort_three_element(t_stacks *a);
void    ft_rra(t_stacks *stacks);
void    ft_ra(t_stacks *stacks);
void sort_five_element(t_stacks *stacks);
void    sort_more_element(t_stacks *stacks);


#endif
