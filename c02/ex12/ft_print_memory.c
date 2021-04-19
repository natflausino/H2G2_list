/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_memory.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbarreir <nbarreir@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/04 21:24:57 by nbarreir          #+#    #+#             */
/*   Updated: 2020/12/04 21:24:59 by nbarreir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcapitalize(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		if ((str[0] >= 97 && str[0] <= 122) ||
		((((str[i - 1]) >= 32 && (str[i - 1]) <= 45) ||
		((str[i - 1]) >= 58 && (str[i - 1]) <= 64) ||
		((str[i - 1]) >= 91 && (str[i - 1]) <= 96) ||
		((str[i - 1]) >= 123 && (str[i - 1]) <= 126)) &&
		(str[i] >= 97 && str[i] <= 122)))
		{
			str[i] = str[i] - 32;
		}
		else if ((str[i] >= 65 && str[i] <= 90) ||
		(((str[i - 1]) >= 48 && (str[i - 1]) <= 57) &&
		str[i] >= 65 && str[i] <= 90))
		{
			str[i] = str[i] + 32;
		}
		i++;
	}
	str[i] = '\0';
	return (str);
}
