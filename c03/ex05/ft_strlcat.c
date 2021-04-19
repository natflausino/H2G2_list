/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbarreir <nbarreir@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/02 04:20:30 by ghenriqu          #+#    #+#             */
/*   Updated: 2020/12/05 04:26:10 by nbarreir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strlcat(char *dest, char *src, unsigned int nb)
{
	int count;

	count = 1;
	while (dest[count] != '\0')
	{
		if (dest[count + 1] == '\0')
		{
			while (nb != 0)
			{
				count++;
				dest[count] = *src;
				src++;
				nb--;
			}
			count++;
			dest[count] = '\0';
			break ;
		}
		count++;
	}
	return (dest);
}
