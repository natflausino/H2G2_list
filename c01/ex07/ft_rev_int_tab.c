/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbarreir <nbarreir@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/01 18:54:17 by nbarreir          #+#    #+#             */
/*   Updated: 2020/12/02 21:52:26 by nbarreir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int tabindex;
	int i;
	int tab_a[size];

	i = 0;
	tabindex = size - 1;
	while (tabindex >= 0)
	{
		tab_a[i] = tab[tabindex];
		tabindex--;
		i++;
	}
	i = 0;
	while (i < size)
	{
		tab[i] = tab_a[i];
		i++;
	}
}
