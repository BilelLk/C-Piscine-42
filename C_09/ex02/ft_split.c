/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blakehal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/22 09:05:14 by blakehal          #+#    #+#             */
/*   Updated: 2022/09/22 16:40:26 by blakehal         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

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

int	ft_len(char *charset, char *str)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (str[i] != charset[j] && str[i])
	{
		j++;
		if (charset[j] == 0)
		{
			i++;
			j = 0;
		}
	}
	return (i);
}

int	ft_nbsep(char *charset, char *str, int z)
{
	int	i;
	int	j;
	int	nb_sep;

	i = 0;
	nb_sep = 0;
	while (str[i])
	{
		j = 0;
		z = 0;
		while (str[i] != charset[j])
		{
			j++;
			if (!charset[j])
			{
				j = 0;
				i++;
				z = 1;
			}
		}
		if (z == 1)
			nb_sep++;
		i++;
	}
	return (nb_sep);
}

void	ft_strcacat(char **final, char *charset, char *str, int z)
{
	int	i;
	int	end;
	int	a;

	i = 0;
	a = 0;
	while (str[i])
	{
		end = ft_len(charset, str + i);
		if (end > 0)
		{
			final[a] = malloc(sizeof(char) * end + 1);
			while (z < end)
			{
				final[a][z] = str[i];
				i++;
				z++;
			}
			final[a][z] = 0;
			a++;
		}
		z = 0;
		i++;
	}
}

char	**ft_split(char *str, char *charset)
{
	char	**final;
	int		i;
	int		nb_sep;
	int		z;

	i = 0;
	z = 0;
	nb_sep = ft_nbsep(charset, str, z);
	if (charset[0] == 0)
	{
		final = malloc(sizeof(char *) + 2);
		final[0] = malloc(sizeof(char) * ft_strlen(str) + 1);
		while (str[i])
		{
			final[0][i] = str[i];
			i++;
		}
		final[0][i] = 0;
		final[1] = 0;
		return (final);
	}
	final = malloc(sizeof(char *) * nb_sep + 1);
	ft_strcacat(final, charset, str, z);
	final[nb_sep] = 0;
	return (final);
}

/*int main(int argc, char **argv)
{
    (void)argc;
    char **res = ft_split(argv[1], argv[2]);
    int i = 0;
    while (i < 6)
    {
        printf("t[%d] = %s\n", i, res[i]);
        i++;
    }
}*/
