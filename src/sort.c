/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asarikha <asarikha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/11 11:31:11 by asarikha          #+#    #+#             */
/*   Updated: 2023/02/14 12:11:49 by asarikha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	is_sorted(int *a)
{
	int	i;

	i = 0;
	while (a[i])
	{
		if (a[i + 1])
		{
			if (a[i] > a[i + 1])
				return (0);
		}
		else
			return (1);
		i++;
	}
	return (1);
}

int	*sort(int *sorted, int size)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (i < size - 1)
	{
		while (j < size)
		{
			j = i + 1;
			if (sorted[i] > sorted[j])
			{
				ft_swap(&sorted[i], &sorted[j]);
				i = 0;
			}
			else
			{
				j++;
				i++;
			}
		}
	}
	return (sorted);
}

int	position(int *sorted, int element)
{
	int	position;

	position = 0;
	while (sorted[position] != element)
		position++;
	return (position + 1);
}

int	*sort_and_position(int *stored, int *positioned, int size)
{
	int	i;
	int	*sorted;

	i = -1;
	positioned = ft_calloc(size, sizeof(int));
	if (!positioned)
	{
		free(stored);
		alloc_fail();
	}
	sorted = ft_calloc(size, sizeof(int));
	if (!sorted)
	{
		double_free(stored, positioned);
		alloc_fail();
	}
	while (++i < size - 1)
		sorted[i] = stored[i];
	i = -1;
	sorted = sort(sorted, size - 1);
	while (++i < size - 1)
		positioned[i] = position(sorted, stored[i]);
	free(sorted);
	return (positioned);
}
