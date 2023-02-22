/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asarikha <asarikha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/11 11:31:11 by asarikha          #+#    #+#             */
/*   Updated: 2023/02/14 12:10:00 by asarikha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "libft.h"
# include <stdio.h>

int		array_size(char *array);
int		validate(char	*element);
int		dublicate(int *stored, int size);
int		*store(int size, char **array, int flag);
void	error_message(void);
long	ft_atol(const char *str);
void	free_and_end(int *stored);
void	alloc_fail(void);
int		*sort_and_position(int *stored, int *positioned, int size);
void	get_moves(int *a, int size, int *b);
int		*sort(int *sorted, int size);
int		position(int *sorted, int element);
void	ft_swap(int *a, int *b);
void	less_than_five(int *a, int size, int *b);
void	ra(int *a);
void	pb(int *a, int *b);
void	pa(int *a, int *b);
void	double_free(int *stored, int *positioned);
void	size_three(int *a);
int		is_sorted(int *a);
void	size_five(int *a, int *b);
void	size_four(int *a, int *b);
void	rra(int *a);
void	sa(int *a);
int		is_largest(int *a, int num);
int		min_num_index(int *a);
void	algorithm(int *a, int size, int *b);
void	free_array(char **array, int size);

#endif