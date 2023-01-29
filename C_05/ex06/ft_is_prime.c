/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blakehal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/10 19:28:38 by blakehal          #+#    #+#             */
/*   Updated: 2022/09/13 11:00:36 by blakehal         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	int	nombre;
	int	diviseur;

	nombre = nb;
	diviseur = 2;
	if (nombre < 0)
		return (0);
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
