/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blakehal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/03 19:48:13 by blakehal          #+#    #+#             */
/*   Updated: 2022/09/05 18:11:38 by blakehal         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

char	*ft_logic(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			if (!((str[i - 1] >= 'A' && str[i - 1] <= 'Z') || \
						(str[i - 1] >= 'a' && str[i - 1] <= 'z') || \
						(str[i - 1] >= '0' && str[i - 1] <= '9')))
				str[i] -= 32;
		}
		else if (str[i] >= 'A' && str[i] <= 'Z')
		{
			if (((str[i - 1] >= 'A' && str[i - 1] <= 'Z') || \
						(str[i - 1] >= 'a' && str[i - 1] <= 'z') || \
						(str[i - 1] >= '0' && str[i - 1] <= '9')))
				str[i] += 32;
		}
		i++;
	}
	return (str);
}

char	*ft_strcapitalize(char *str)
{
	if (str[0] >= 'a' && str[0] <= 'z')
	{
		str[0] = str[0] - 32;
	}
	ft_logic(str);
	return (str);
}
