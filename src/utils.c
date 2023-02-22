/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asarikha <asarikha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/11 11:31:11 by asarikha          #+#    #+#             */
/*   Updated: 2023/02/08 16:34:14 by asarikha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_swap(int *a, int *b)
{
	int	temporary;

	temporary = *a;
	*a = *b;
	*b = temporary;
}

int	is_largest(int *a, int num)
{
	int	i;

	i = -1;
	while (a[++i])
		if (a[i] > num)
			return (0);
	return (1);
}

int	min_num_index(int *a)
{
	int	min_num;
	int	index;

	index = 0;
	min_num = 1;
	while (a[index] != min_num)
	{
		index = 0;
		while (a[index] != 0)
		{
			if (a[index] != min_num)
				index++;
			else
				return (index);
		}
		min_num++;
	}
	return (index);
}

long	ft_atol(const char *str)
{
	int		i;
	long	result;
	int		sign;

	i = 0;
	result = 0;
	sign = 1;
	while (str[i] == '\r' || str[i] == '\t' || str[i] == ' '
		|| str[i] == '\f' || str[i] == '\v' || str[i] == '\n')
		i++;
	if (str[i] == '-')
	{
		sign = -1;
		i++;
	}
	else if (str[i] == '+')
		i++;
	if (ft_isdigit(str[i]) == 0)
		return (0);
	while (ft_isdigit(str[i]) != 0)
	{
		result = result * 10 + (str[i] - '0');
		i++;
	}
	return (result * sign);
}
