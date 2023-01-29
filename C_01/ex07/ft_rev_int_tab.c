/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blakehal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/02 11:24:21 by blakehal          #+#    #+#             */
/*   Updated: 2022/09/07 09:15:27 by blakehal         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	index_min;
	int	index_inutile;
	int	x;
	int	y;

	i = 0;
	index_min = 0;
	index_inutile = size / 2;
	while (i < index_inutile)
	{
		x = tab[index_min];
		y = tab[size - 1];
		tab[index_min] = y;
		tab[size - 1] = x;
		index_min++;
		size--;
		i++;
	}
}
