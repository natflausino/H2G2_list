/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ghenriqu <ghenriqu@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/02 02:38:38 by ghenriqu          #+#    #+#             */
/*   Updated: 2020/12/03 22:50:00 by ghenriqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int count;
	int count2;

	count = 0;
	if (*to_find == '\0')
		return (str);
	while (str[count] != '\0')
	{
		count2 = 0;
		while (str[count + count2] == to_find[count2])
		{
			count2++;
			if (to_find[count2] == '\0')
				return (&str[count]);
		}
		count++;
	}
	return (0);
}
