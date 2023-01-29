/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blakehal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/04 09:59:52 by blakehal          #+#    #+#             */
/*   Updated: 2022/09/07 09:09:05 by blakehal         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	total_length;
	unsigned int	i;

	total_length = 0;
	i = 0;
	while (src[total_length] != '\0')
	{
		total_length++;
	}
	while (i < size - 1)
	{
		dest[i] = src[i];
		i++;
	}	
	return (total_length);
}
