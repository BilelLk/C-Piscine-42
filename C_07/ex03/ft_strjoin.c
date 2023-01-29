/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blakehal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/13 17:04:08 by blakehal          #+#    #+#             */
/*   Updated: 2022/09/20 18:42:19 by blakehal         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	ft_strlelen(char **strs, int size, char *sep)
{
	int	len;
	int	i;

	i = 0;
	while (i < size)
	{
		len = len + ft_strlen(strs[i]);
		len = len + ft_strlen(sep);
		i++;
	}
	if (size >= 1)
		len = len - ft_strlen(sep);
	len = len + 1;
	return (len);
}

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	len_src;
	int	len_dest;

	i = 0;
	len_src = ft_strlen(src);
	len_dest = ft_strlen(dest);
	while (src[i])
	{
		dest[len_dest + i] = src[i];
		i++;
	}
	dest[len_dest + i] = '\0';
	return (dest);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		len_final;
	int		i;
	char	*join;

	i = 0;
	len_final = ft_strlelen(strs, size, sep);
	join = malloc(sizeof(char) * len_final);
	if (!join)
		return (NULL);
	join[0] = '\0';
	if (size == 0)
		return (join);
	while (i < size)
	{
		ft_strcat(join, strs[i]);
		if (i != size - 1)
			ft_strcat(join, sep);
		i++;
	}
	join[ft_strlen(join)] = '\0';
	return (join);
}

/*#include <stdio.h>
int	main(void)
{
	char *tab[]= {"Bonjour","comment","ca","va","?"};
	char *r = ft_strjoin(5, tab, ",");
	printf("%s\n", r);
	return (0);
}*/
