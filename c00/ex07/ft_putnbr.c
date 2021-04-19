/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbarreir <nbarreir@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/26 17:28:32 by nbarreir          #+#    #+#             */
/*   Updated: 2020/11/29 16:57:56 by nbarreir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putnbr(int nb)
{
	int a;

	if (nb < 0)
	{
		write(1, "-", 1);
		a = nb * -1;
	}
	else
	{
		a = nb;
	}
	if (a >= 10)
	{
		ft_putnbr(a / 10);
	}
	a = a % 10 + 48;
	write(1, &a, 1);
}
