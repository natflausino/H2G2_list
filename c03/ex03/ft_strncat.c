/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ghenriqu <ghenriqu@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/02 01:10:00 by ghenriqu          #+#    #+#             */
/*   Updated: 2020/12/03 22:56:08 by ghenriqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	int				count;
	unsigned int	count2;

	count2 = 0;
	count = 0;
	while (dest[count] != '\0')
	{
		count++;
	}
	while (src[count2] != '\0' && nb != count2)
	{
		dest[count] = src[count2];
		count++;
		count2++;
	}
	dest[count] = '\0';
	return (dest);
}
