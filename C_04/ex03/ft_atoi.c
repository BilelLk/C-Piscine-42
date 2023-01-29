/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blakehal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/06 16:16:46 by blakehal          #+#    #+#             */
/*   Updated: 2022/09/08 15:49:34 by blakehal         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(char *str)
{
	int	i;
	int	compt_minus;
	int	finale;

	i = 0;
	finale = 0;
	compt_minus = 0;
	while ((str[i] == ' ') || (str[i] == '\n') || (str[i] == '\v') || \
			(str[i] == '\f') || (str[i] == '\r') || (str[i] == '\t'))
		i++;
	while ((str[i] == '-') || (str[i] == '+'))
	{
		if (str[i++] == '-')
			compt_minus++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		finale = finale * 10 + (str[i] - '0');
		i++;
	}
	if (compt_minus % 2 != 0)
		return (-finale);
	return (finale);
}
