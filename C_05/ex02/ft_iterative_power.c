/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blakehal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/10 14:56:29 by blakehal          #+#    #+#             */
/*   Updated: 2022/09/10 15:16:52 by blakehal         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */
int	ft_iterative_power(int nb, int power)
{
	int	nombre;

	nombre = nb;
	if (power < 0)
		return (0);
	if (nb == 0 && power == 0)
		return (1);
	if (power == 0)
		return (1);
	while (power >= 2)
	{
		nombre = nombre * nb;
		power--;
	}
	return (nombre);
}
