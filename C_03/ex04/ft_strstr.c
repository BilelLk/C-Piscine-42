/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blakehal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/05 18:59:32 by blakehal          #+#    #+#             */
/*   Updated: 2022/09/06 18:06:22 by blakehal         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */
int	ft_check(char *str, char *to_find, int i, int len_to_find)
{
	int	j;
	int	k;

	j = 0;
	k = i;
	if (str[i] == to_find[j])
	{
		while ((str[k] == to_find[j]) && (str[k] || to_find[j]))
		{
			j++;
			k++;
		}
		if (j == len_to_find)
		{
			return (1);
		}
	}
	return (0);
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

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	len_to_find;

	i = 0;
	len_to_find = ft_strlen(to_find);
	if (len_to_find == 0)
		return (str);
	else
	{
		while (str[i])
		{
			if (ft_check(str, to_find, i, len_to_find) == 1)
				return (&str[i]);
			i++;
		}
	}
	return (0);
}
