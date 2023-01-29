/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_my_atoi_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blakehal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/19 10:37:16 by blakehal          #+#    #+#             */
/*   Updated: 2022/09/19 19:47:40 by blakehal         ###   ########lyon.fr   */
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

int	ft_convert_to_int(int b, char *str, char *base, int compt_minus)
{
	int	len_base;
	int	size;
	int	finale;

	len_base = ft_strlen(base);
	size = ft_strlen(str);
	finale = 0;
	while (str[b])
	{
		if (ft_check_base(str[b], base) >= 0)
			finale = finale * len_base + (ft_check_base(str[b], base));
		else
			break ;
		b++;
	}
	if (compt_minus % 2 != 0)
		return (-finale);
	return (finale);
}

int	ft_atoi_base(char *str, char *base)
{
	int	i;
	int	b;
	int	compt_minus;

	i = 0;
	compt_minus = 0;
	if (!ft_check_error_base(base))
		return (0);
	while ((str[i] == ' ') || (str[i] == '\n') || (str[i] == '\v') || \
			(str[i] == '\f') || (str[i] == '\r') || (str[i] == '\t'))
		i++;
	while ((str[i] == '-') || (str[i] == '+'))
	{
		if (str[i++] == '-')
			compt_minus++;
	}
	b = i;
	return (ft_convert_to_int(b, str, base, compt_minus));
}
