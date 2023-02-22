/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asarikha <asarikha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/11 11:31:11 by asarikha          #+#    #+#             */
/*   Updated: 2023/02/14 11:43:47 by asarikha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static	void	only_space(char *array)
{
	int	i;
	int	char_found;

	char_found = 0;
	i = 0;
	while (array[i])
	{
		if (array[i] != ' ')
			char_found = 1;
		i++;
	}
	if (char_found == 0)
	{
		error_message();
		exit(0);
	}
}

int	array_size(char *array)
{
	int	size;
	int	i;

	if (!*array)
		exit(0);
	only_space(array);
	i = 0;
	size = 0;
	while (array[i])
	{
		if (i == 0 || array[i -1] == ' ')
			size++;
		i++;
	}
	size++;
	return (size);
}

int	*store(int size, char **array, int flag)
{
	int	*stored;
	int	i;

	i = flag;
	stored = ft_calloc(size, sizeof(int));
	if (!stored)
		alloc_fail();
	size--;
	while (i < size + flag)
	{
		if (validate(array[i]))
			stored[i - flag] = ft_atoi(array[i]);
		else
		{
			if (!flag)
				free_array(array, size);
			free_and_end(stored);
		}
		i++;
	}
	if (!flag)
		free_array(array, size);
	if (dublicate(stored, size))
		free_and_end(stored);
	return (stored);
}
