/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   validate.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asarikha <asarikha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/11 11:31:11 by asarikha          #+#    #+#             */
/*   Updated: 2023/02/14 11:57:25 by asarikha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	validate(char *element)
{
	int	i;
	int	digit_found;

	i = 0;
	digit_found = 0;
	if (ft_strlen(element) > 11)
		return (0);
	if (element[i] == '-' || element[i] == '+')
		i++;
	while (element[i] != '\0')
	{
		if (element[i] < '0' || element[i] > '9')
			return (0);
		else
			digit_found = 1;
		i++;
	}
	if (digit_found == 0)
		return (0);
	if (ft_atol(element) >= 2147483648 || ft_atol(element) <= -2147483649)
		return (0);
	return (1);
}

int	dublicate(int *stored, int size)
{
	int	i;
	int	j;

	i = 0;
	while (i < size)
	{
		j = i + 1;
		while (j < size)
		{
			if (stored[i] == stored[j])
			{
				return (1);
			}
			else
			j++;
		}
		i++;
	}
	return (0);
}
