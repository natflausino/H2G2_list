/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush04.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbarreir <nbarreir@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/22 01:59:24 by nbarreir          #+#    #+#             */
/*   Updated: 2020/11/24 18:18:00 by nbarreir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int g_l = 0;
int g_c = 0;

int		ft_putchar(char n);

void	ac1(int x, int g_c, int g_l)
{
	if (g_l == 0)
	{
		if (g_c == 0)
		{
			ft_putchar('A');
		}
		else if (g_c == x - 1)
		{
			ft_putchar('C');
		}
		else
		{
			ft_putchar('B');
		}
	}
}

void	ac2(int x, int y, int g_c)
{
	if (g_l == y - 1)
	{
		if (g_c == 0)
		{
			ft_putchar('C');
		}
		else if (g_c == x - 1)
		{
			ft_putchar('A');
		}
		else
		{
			ft_putchar('B');
		}
	}
}

void	bb(int x, int g_c)
{
	if ((g_c == 0) || (g_c == x - 1))
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
	g_l = 0;
	while (g_l < y && x > 0 && y > 0)
	{
		g_c = 0;
		while (g_c < x)
		{
			if (g_l == 0)
			{
				ac1(x, g_c, g_l);
			}
			else if (g_l == y - 1)
			{
				ac2(x, y, g_c);
			}
			else if ((g_l != 0) || (g_l != y - 1))
			{
				bb(x, g_c);
			}
			g_c++;
		}
		ft_putchar('\n');
		g_l++;
	}
}
