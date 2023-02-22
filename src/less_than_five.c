/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   less_than_five.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asarikha <asarikha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/11 11:31:11 by asarikha          #+#    #+#             */
/*   Updated: 2023/02/14 11:44:40 by asarikha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	size_three(int *a)
{
	if (is_largest(a, a[0]))
	{
		ra(a);
		if (a[0] > a[1])
			sa(a);
		return ;
	}
	if (is_largest(a, a[1]))
	{
		if (a[0] > a[2])
			rra(a);
		else
		{
			sa(a);
			ra(a);
		}
		return ;
	}
	if (is_largest(a, a[2]))
		if (a[0] > a[1])
			sa(a);
	return ;
}

void	size_four(int *a, int *b)
{
	int	index;

	index = min_num_index(a);
	if (index == 1)
		ra(a);
	else if (index == 2)
	{
		ra(a);
		ra(a);
	}
	else if (index == 3)
		rra(a);
	if (is_sorted(a))
		return ;
	pb(a, b);
	size_three(a);
	pa(a, b);
}

void	size_five(int *a, int *b)
{
	int	index;

	index = min_num_index(a);
	if (index == 1)
		ra(a);
	else if (index == 2)
	{
		ra(a);
		ra(a);
	}
	else if (index == 3)
	{
		rra(a);
		rra(a);
	}
	else if (index == 4)
		rra(a);
	if (is_sorted(a))
		return ;
	pb(a, b);
	size_four(a, b);
	pa(a, b);
}

void	less_than_five(int *a, int size, int *b)
{
	if (size == 1)
		return ;
	else if (size == 2)
	{
		if (a[0] > a[1])
			sa(a);
		return ;
	}
	else if (size == 3)
		size_three(a);
	else if (size == 4)
	{
		size_four(a, b);
	}
	else
		size_five(a, b);
	return ;
}
