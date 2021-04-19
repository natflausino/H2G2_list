/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csantos- <csantos-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/03 14:44:44 by csantos-          #+#    #+#             */
/*   Updated: 2020/12/04 17:25:55 by csantos-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putnbr(int nb)
{
	int			number[11];
	int			number_count;
	long int	l_number;

	l_number = nb;
	number_count = 0;
	if (l_number < 0)
	{
		l_number = -l_number;
		write(1, "-", 1);
	}
	if (l_number == 0)
		write(1, "0", 1);
	while (l_number > 0)
	{
		number[number_count] = l_number % 10 + '0';
		l_number = l_number / 10;
		number_count++;
	}
	number_count--;
	while (number_count >= 0)
	{
		write(1, &number[number_count], 1);
		number_count--;
	}
}
