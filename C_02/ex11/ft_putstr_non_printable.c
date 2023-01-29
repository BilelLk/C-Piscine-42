/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blakehal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/04 15:12:33 by blakehal          #+#    #+#             */
/*   Updated: 2022/09/06 21:10:43 by blakehal         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

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

void	ft_print(const char c)
{
	write(1, &c, 1);
}

int	ft_hexa(const int n)
{
	char	*hexa;

	hexa = "0123456789abcdef";
	return (hexa[n]);
}

void	ft_conversion(const char valeur)
{
	int	div;
	int	mod;

	div = valeur / 16;
	mod = valeur % 16;
	ft_print('\\');
	ft_print(ft_hexa(div));
	ft_print(ft_hexa(mod));
}

void	ft_putstr_non_printable(char *str)
{
	char	valeur;
	int		index;
	int		len;
	int		i;

	index = 0;
	i = 0;
	len = ft_strlen(str);
	while (i < 16)
	{
		valeur = str[index++];
		if ((valeur > 1 && valeur < 32) || valeur > 127)
		{
			ft_conversion(valeur);
		}	
		else
		{
			write(1, &valeur, 1);
		}
		i++;
	}
	write(1, "\\00", 3);
}
