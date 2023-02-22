/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   moves.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asarikha <asarikha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/11 11:31:11 by asarikha          #+#    #+#             */
/*   Updated: 2023/02/14 11:59:52 by asarikha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ra(int *a)
{
	int	i;
	int	temp;

	temp = a[0];
	i = 0;
	while (a[i + 1] != 0)
	{
		a[i] = a[i + 1];
		i++;
	}
	a[i] = temp;
	ft_printf("ra\n");
}

void	pb(int *a, int *b)
{
	int	i;

	i = 0;
	while (b[i] != 0)
		i++;
	b[i] = a[0];
	b[i + 1] = 0;
	i = 0;
	while (a[i] != 0)
	{
		a[i] = a[i + 1];
		i++;
	}
	ft_printf("pb\n");
}

void	pa(int *a, int *b)
{
	int	i;
	int	j;

	j = 0;
	i = 0;
	while (b[i + 1] != 0)
		i++;
	while (a[j] != 0)
		j++;
	a[j + 1] = 0;
	while (j >= 1)
	{
		a[j] = a[j - 1];
		j--;
	}
	a[0] = b[i];
	b[i] = 0;
	ft_printf("pa\n");
}

void	rra(int *a)
{
	int	i;
	int	temp;

	temp = a[0];
	i = 0;
	while (a[i + 1] != 0)
		i++;
	a[0] = a[i];
	while (i >= 2)
	{
		a[i] = a[i - 1];
		i--;
	}
	a[1] = temp;
	ft_printf("rra\n");
}

void	sa(int *a)
{
	ft_swap (&a[0], &a[1]);
	ft_printf("sa\n");
}
