/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blakehal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/09 13:19:44 by blakehal          #+#    #+#             */
/*   Updated: 2022/09/14 11:12:08 by blakehal         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>

int	ft_strlen(char *src)
{
	int	i;

	i = 0;
	while (src[i])
		i++;
	return (i);
}

char	*ft_strdup(char *src)
{
	char	*source;
	int		i;
	int		len_src;

	i = 0;
	len_src = ft_strlen(src);
	source = malloc(sizeof(char) * len_src + 1);
	if (!source)
		return (NULL);
	while (src[i])
	{
		source[i] = src[i];
		i++;
	}
	source[i] = '\0';
	return (source);
}
