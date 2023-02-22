/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   terminate.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asarikha <asarikha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/11 11:31:11 by asarikha          #+#    #+#             */
/*   Updated: 2023/02/14 11:56:33 by asarikha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include <limits.h>

void	double_free(int *stored, int *positioned)
{
	free(stored);
	free(positioned);
}

void	error_message(void)
{
	write(2, "Error\n", 6);
}

void	free_and_end(int *stored)
{
	free(stored);
	error_message();
	exit (0);
}

void	alloc_fail(void)
{
	ft_printf("Memory allocation faild on your computer! try fewer numbers.\n");
	exit (0);
}

void	free_array(char **array, int size)
{
	int	i;

	if (!array)
		return ;
	i = 0;
	while (i < size)
	{
		free(array[i]);
		i++;
	}
	free(array);
}
