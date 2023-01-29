/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blakehal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/06 10:38:11 by blakehal          #+#    #+#             */
/*   Updated: 2022/09/07 09:47:27 by blakehal         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlen(char *str)
{
	unsigned int	i;

	i = 0;
	while (str[i])
	{
		i++;
	}
	return (i);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	char	*destination;
	char	*source;
	int		taille;
	int		len_dest;

	destination = dest;
	source = src;
	taille = size;
	while (taille-- != 0 && *destination != '\0')
		destination++;
	len_dest = destination - dest;
	taille = size - len_dest;
	if (taille == 0)
		return (len_dest + ft_strlen(source));
	while (*source != '\0')
	{
		if (taille != 1)
		{
			*destination++ = *source;
			taille--;
		}
		source++;
	}
	*destination = '\0';
	return (len_dest + (source - src));
}
