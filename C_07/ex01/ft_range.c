/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blakehal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/09 13:25:30 by blakehal          #+#    #+#             */
/*   Updated: 2022/09/14 11:00:29 by blakehal         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	i;
	int	*tab;
	int	len_tab;

	i = 0;
	len_tab = max - min;
	if (min >= max)
		return (NULL);
	tab = malloc(sizeof(int) * len_tab);
	if (!tab)
		return (NULL);
	while (i < len_tab)
	{
		tab[i] = min;
		min++;
		i++;
	}
	return (tab);
}
