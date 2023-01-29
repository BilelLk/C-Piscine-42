/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base2.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blakehal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/19 15:55:39 by blakehal          #+#    #+#             */
/*   Updated: 2022/09/22 18:50:00 by blakehal         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>

int	ft_atoi_base(char *str, char *base);
int	ft_strlen(char *src);
int	ft_check_error_base(char *base);

int	ft_len_nbr_in_base(int nb_from, char *base_to)
{
	int				len_nb_to;
	unsigned int	len_base_to;
	unsigned int	nbr;

	len_nb_to = 1;
	len_base_to = ft_strlen(base_to);
	if (nb_from < 0)
	{
		nbr = -nb_from;
		len_nb_to++;
	}
	else
		nbr = nb_from;
	while (nbr >= len_base_to)
	{
		nbr = nbr / len_base_to;
		len_nb_to++;
	}
	return (len_nb_to);
}

char	*ft_implement(int nb_from, char *nb_to, char *base_to)
{
	int				i;
	unsigned int	len_nb_to;
	unsigned int	len_base_to;
	unsigned int	nbr;

	i = 0;
	len_base_to = ft_strlen(base_to);
	len_nb_to = ft_len_nbr_in_base(nb_from, base_to);
	if (nb_from < 0)
	{
		nb_to[0] = '-';
		nbr = -nb_from;
	}
	else
		nbr = nb_from;
	if (nbr == 0)
		nb_to[0] = base_to[0];
	while (nbr >= 1)
	{
		nb_to[len_nb_to - i - 1] = base_to[nbr % len_base_to];
		nbr = nbr / len_base_to;
		i++;
	}
	nb_to[len_nb_to] = '\0';
	return (nb_to);
}

char	*ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	int		nb_from;
	int		i;
	int		len_nbr_base;
	char	*nb_to;

	if (!ft_check_error_base(base_to) || !ft_check_error_base(base_from))
		return (0);
	i = ft_strlen(base_from);
	if (i < 2)
		return (0);
	i = ft_strlen(base_to);
	if (i < 2)
		return (0);
	i = 0;
	nb_from = ft_atoi_base(nbr, base_from);
	len_nbr_base = ft_len_nbr_in_base(nb_from, base_to);
	nb_to = malloc(sizeof(char) * (len_nbr_base + 1));
	if (!nb_to)
		return (NULL);
	return (ft_implement(nb_from, nb_to, base_to));
}

/*#include <stdio.h>
int main(int argc, char **argv)
{
    (void)argc;
    (void)argv;
    printf("%s",ft_convert_base("salut", "0123456789", "01"));
    //printf("%s",ft_convert_base(argv[1], argv[2], argv[3]));
    //ex : ./a.out 1458 0123456789 0123456789abcdef
}*/
