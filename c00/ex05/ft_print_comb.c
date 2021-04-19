/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbarreir <nbarreir@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/24 16:58:15 by nbarreir          #+#    #+#             */
/*   Updated: 2020/11/26 06:05:08 by nbarreir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	write_int(int a, int b, int c)
{
	write(1, &a, 1);
	write(1, &b, 1);
	write(1, &c, 1);
	if (a != 55)
	{
		write(1, ", ", 2);
	}
}

void	ft_print_comb(void)
{
	int a;
	int b;
	int c;

	a = 48;
	while (a > 47 && a < 56)
	{
		b = a + 1;
		while (b > a && b > 48 && b < 57)
		{
			c = b + 1;
			while (c > b && c > 49 && c < 58)
			{
				write_int(a, b, c);
				c++;
			}
			b++;
		}
		a++;
	}
}