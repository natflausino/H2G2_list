/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbarreir <nbarreir@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/26 06:08:13 by nbarreir          #+#    #+#             */
/*   Updated: 2020/11/29 16:56:28 by nbarreir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char g_a;
char g_b;
char g_c;
char g_d;

void	write_int(char g_a, char g_b, char g_c, char g_d)
{
	write(1, &g_a, 1);
	write(1, &g_b, 1);
	write(1, " ", 1);
	write(1, &g_c, 1);
	write(1, &g_d, 1);
	if (g_a == '9' && g_b == '8' && g_c == '9' && g_d == '9')
	{
		write(1, "", 0);
	}
	else
	{
		write(1, ", ", 2);
	}
}

void	ft_print_comb2(void)
{
	g_a = '0';
	while (g_a <= '9')
	{
		g_b = '0';
		while (g_b < '9')
		{
			g_c = '0';
			while (g_c <= '9')
			{
				g_d = g_b + 1;
				while (g_d <= '9')
				{
					write_int(g_a, g_b, g_c, g_d);
					g_d++;
				}
				g_c++;
			}
			g_b++;
		}
		g_a++;
	}
}
