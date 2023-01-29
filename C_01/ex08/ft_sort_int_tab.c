/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blakehal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/02 21:03:30 by blakehal          #+#    #+#             */
/*   Updated: 2022/09/04 12:40:52 by blakehal         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_swap(int *actuel, int *suivant)
{
	int	intermediaire;

	intermediaire = 0;
	intermediaire = *suivant;
	*suivant = *actuel;
	*actuel = intermediaire;
}

void	ft_sort_int_tab(int *tab, int size)
{
	int	actuel;
	int	suivant;

	actuel = 0;
	suivant = 1;
	while (size != 0)
	{
		while (suivant <= size - 1)
		{	
			if (tab[actuel] > tab [suivant])
			{
				ft_swap(&tab[actuel], &tab[suivant]);
			}
			actuel++;
			suivant++;
		}
		actuel = 0;
		suivant = 1;
		size--;
	}
}
