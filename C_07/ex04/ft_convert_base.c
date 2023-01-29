/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blakehal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/19 15:55:28 by blakehal          #+#    #+#             */
/*   Updated: 2022/09/20 16:46:51 by blakehal         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *src)
{
	int	i;

	i = 0;
	while (src[i])
		i++;
	return (i);
}

int	ft_check_error_base(char *base)
{
	int	i;
	int	j;

	i = 0;
	while (base[i])
	{
		j = i + 1;
		while (base[j])
		{
			if (base[i] == base[j])
				return (0);
			else
				j++;
		}
		if (base[i] == '+' || base[i] == '-' || base[i] == ' ' || \
				base[i] == '\n' || base[i] == '\v' || base[i] == '\f' || \
				base[i] == '\r' || base[i] == '\t')
			return (0);
		i++;
	}
	return (1);
}

int	ft_check_base(char c, char *base)
{
	int	i;

	i = 0;
	while (base[i])
	{
		if (base[i] == c)
			return (i);
		i++;
	}
	return (-1);
}

int	ft_convert_to_int(int b, char *nbr, char *base_fr, int compt_minus)
{
	int	len_base_from;
	int	size;
	int	finale;

	len_base_from = ft_strlen(base_fr);
	size = ft_strlen(nbr);
	finale = 0;
	while (nbr[b])
	{
		if (ft_check_base(nbr[b], base_fr) >= 0)
			finale = finale * len_base_from + (ft_check_base(nbr[b], base_fr));
		else
			break ;
		b++;
	}
	if (compt_minus % 2 != 0)
		return (-finale);
	return (finale);
}

int	ft_atoi_base(char *nbr, char *base_fr)
{
	int	i;
	int	b;
	int	compt_minus;

	i = 0;
	compt_minus = 0;
	if (!ft_check_error_base(base_fr))
		return (0);
	while ((nbr[i] == ' ') || (nbr[i] == '\n') || (nbr[i] == '\v') || \
			(nbr[i] == '\f') || (nbr[i] == '\r') || (nbr[i] == '\t'))
		i++;
	while ((nbr[i] == '-') || (nbr[i] == '+'))
	{
		if (nbr[i++] == '-')
			compt_minus++;
	}
	b = i;
	return (ft_convert_to_int(b, nbr, base_fr, compt_minus));
}
