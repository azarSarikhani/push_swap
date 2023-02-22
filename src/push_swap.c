/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asarikha <asarikha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/11 11:31:11 by asarikha          #+#    #+#             */
/*   Updated: 2023/02/14 11:44:12 by asarikha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	algorithm(int *a, int size, int *b)
{
	int	max_bits;
	int	i;
	int	j;

	i = -1;
	max_bits = 0;
	while (((size - 1) >> max_bits) != 0)
		max_bits++;
	while (++i < max_bits)
	{
		j = -1;
		while (++j < size)
		{
			if (((a[0] >> i) & 1) == 1)
				ra(a);
			else
				pb(a, b);
		}
		while (b[0] != 0)
			pa(a, b);
	}
}

void	get_moves(int *a, int size, int *b)
{
	if ((is_sorted(a)))
		return ;
	ft_bzero(b, size * sizeof(int));
	if (size < 6)
	{
		less_than_five(a, size, b);
		return ;
	}
	else
		algorithm (a, size, b);
}

int	main(int argc, char **argv)
{
	char	**array;
	int		*stored;
	int		*positioned;
	int		size;

	positioned = NULL;
	size = argc;
	if (argc >= 2)
	{
		if (argc == 2)
		{
			size = array_size(argv[1]);
			array = ft_split(argv[1], ' ');
			stored = store(size, array, 0);
		}
		else
			stored = store(size, argv, 1);
		positioned = sort_and_position(stored, positioned, size);
		get_moves(positioned, size - 1, stored);
		double_free(stored, positioned);
	}
	return (0);
}
