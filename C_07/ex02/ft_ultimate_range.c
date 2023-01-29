/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blakehal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/13 15:32:02 by blakehal          #+#    #+#             */
/*   Updated: 2022/09/14 11:11:25 by blakehal         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	i;
	int	*tab;
	int	len_tab;

	i = 0;
	len_tab = max - min;
	if (min >= max)
		return (0);
	tab = malloc(sizeof(int) * len_tab);
	if (!tab)
		return (0);
	while (i < len_tab)
	{
		tab[i] = min;
		min++;
		i++;
	}
	*range = tab;
	return (len_tab);
}
