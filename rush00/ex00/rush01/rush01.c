/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbarreir <nbarreir@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/22 03:18:09 by nbarreir          #+#    #+#             */
/*   Updated: 2020/11/22 22:16:56 by nbarreir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int g_l;
int g_c;

int		ft_putchar(char n);

void	ac1(int x, int g_c, int g_l)
{
	if (g_l == 0)
	{
		if (g_c == 0)
		{
			ft_putchar('/');
		}
		else if (g_c == x - 1)
		{
			ft_putchar('\\');
		}
		else
		{
			ft_putchar('*');
		}
	}
}

void	ac2(int x, int g_c, int y, int g_l)
{
	if (g_l == y - 1)
	{
		if (g_c == 0)
		{
			ft_putchar('\\');
		}
		else if (g_c == x - 1)
		{
			ft_putchar('/');
		}
		else
		{
			ft_putchar('*');
		}
	}
}

void	bb(int x, int g_c)
{
	if ((g_c == 0) || (g_c == x - 1))
	{
		ft_putchar('*');
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
				ac2(x, g_c, y, g_l);
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
