/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blakehal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/08 19:48:44 by blakehal          #+#    #+#             */
/*   Updated: 2022/09/12 21:25:04 by blakehal         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		write(1, &str[i], 1);
		i++;
	}
}

void	ft_swap(char **actuel, char **suivant)
{
	char	*intermediaire;

	intermediaire = *suivant;
	*suivant = *actuel;
	*actuel = intermediaire;
}

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		i++;
	}
	return (i);
}

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] != '\0' || s2[i] != '\0')
	{
		if (s1[i] != s2[i])
		{
			return (s1[i] - s2[i]);
		}
		i++;
	}
	return (0);
}

int	main(int argc, char **argv)
{
	int	actuel;
	int	suivant;
	int	i;

	i = 1;
	actuel = 1;
	while (argc > actuel)
	{
		suivant = actuel + 1;
		while (suivant <= argc - 1)
		{
			if (ft_strcmp(argv[actuel], argv[suivant]) > 0)
				ft_swap(&argv[actuel], &argv[suivant]);
			suivant++;
		}
		actuel++;
	}
	while (argv[i])
	{
		ft_putstr(argv[i]);
		write(1, "\n", 1);
		i++;
	}
	return (argc);
}
