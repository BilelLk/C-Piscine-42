/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blakehal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/31 19:09:15 by blakehal          #+#    #+#             */
/*   Updated: 2022/09/02 11:49:06 by blakehal         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_write(char a, char b, char c, char d)
{
	write(1, &a, 1);
	write(1, &b, 1);
	write(1, " ", 1);
	write(1, &c, 1);
	write(1, &d, 1);
	if (a == '9' && b == '8' && c == '9' && d == '9')
	{
		return ;
	}
	else
		write(1, ", ", 2);
}

void	ft_print(char a, char b, char c, char d)
{
	while (a <= '9')
	{
		while (b <= '9')
		{
			c = a;
			while (c <= '9')
			{
				while (d <= '9')
				{
					ft_write(a, b, c, d);
					d++;
				}
				c++;
				d = '0';
			}
			b++;
			c = '0';
			d = b + 1;
		}
		a++;
		b = '0';
		d = b + 1;
	}
	a = '0';
}

void	ft_print_comb2(void)
{
	char	a;
	char	b;
	char	c;
	char	d;

	a = '0';
	b = '0';
	c = '0';
	d = '1';
	ft_print(a, b, c, d);
}
