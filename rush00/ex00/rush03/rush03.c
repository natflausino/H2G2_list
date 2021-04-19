/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush03.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbarreir <nbarreir@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/22 03:10:45 by nbarreir          #+#    #+#             */
/*   Updated: 2020/11/22 22:40:46 by nbarreir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		ft_putchar(char n);

void	ac(int x, int c, int y, int l)
{
	if ((l == 0) || (l == y - 1))
	{
		if (c == 0)
		{
			ft_putchar('A');
		}
		else if (c == x - 1)
		{
			ft_putchar('C');
		}
		else
		{
			ft_putchar('B');
		}
	}
}

void	bb(int x, int c)
{
	if ((c == 0) || (c == x - 1))
	{
		ft_putchar('B');
	}
	else
	{
		ft_putchar(' ');
	}
}

void	rush(int x, int y)
{
	int l;
	int c;

	l = 0;
	while (l < y && x > 0 && y > 0)
	{
		c = 0;
		while (c < x)
		{
			if ((l == 0) || (l == y - 1))
			{
				ac(x, c, y, l);
			}
			else if ((l != 0) || (l != y - 1))
			{
				bb(x, c);
			}
			c++;
		}
		ft_putchar('\n');
		l++;
	}
}
