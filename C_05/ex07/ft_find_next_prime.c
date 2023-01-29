/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blakehal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/10 19:44:50 by blakehal          #+#    #+#             */
/*   Updated: 2022/09/13 11:04:44 by blakehal         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */
int	ft_is_prime(int nb)
{
	int	nombre;
	int	diviseur;

	nombre = nb;
	diviseur = 2;
	if (nombre == 0 || nombre == 1)
		return (0);
	if (nombre == 2)
		return (1);
	if (nombre % 2 == 0)
		return (0);
	while (diviseur < nombre && diviseur < 46341)
	{
		if (nb % diviseur == 0)
			return (0);
		diviseur++;
	}
	return (1);
}

int	ft_find_next_prime(int nb)
{
	int	int_max;
	int	nombre;

	nombre = nb;
	int_max = 2147483647;
	if (nombre < 0)
		return (2);
	while (nombre <= int_max)
	{
		if (ft_is_prime(nombre) == 1)
			return (nombre);
		nombre++;
	}
	return (0);
}
