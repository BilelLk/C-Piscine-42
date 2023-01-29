/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blakehal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/07 15:09:36 by blakehal          #+#    #+#             */
/*   Updated: 2022/09/10 13:33:35 by blakehal         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	i;
	int	nombre;

	i = 2;
	nombre = 1;
	if (nb < 0)
		return (0);
	if (nb == 0)
		return (1);
	while (nb >= i)
	{
		nombre = i * nombre;
		i++;
	}
	return (nombre);
}
