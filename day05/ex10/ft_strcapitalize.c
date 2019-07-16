/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdomanta <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/15 19:31:35 by jdomanta          #+#    #+#             */
/*   Updated: 2019/07/15 21:10:05 by jdomanta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		is_word(char *str, int index);

char	*ft_strcapitalize(char *str)
{
	int index;

	index = 0;
	while (str[index] != '\0')
	{
		while (str[index] == ' ')
			index++;
		if (is_word(str, index))
		{
			if (str[index] > 'Z')
				str[index] -= 32;
			index++;
			while (str[index] > 64)
			{
				if (str[index] < 'a' && str[index] >= 'A')
					str[index] += 32;
				index++;
			}
		}
		else
			while (str[index] != ' ' && str[index] != '\0')
				index++;
	}
	return (str);
}

int		is_word(char *str, int index)
{
	while (str[index] != ' ' && str[index] != '\0')
	{
		if (str[index] < 'A' || str[index] > 'z')
			if (str[index] < '0' || str[index] > '9')
				return (0);
		if (str[index] < 'a' && str[index] > 'Z')
			return (0);
		index++;
	}
	return (1);
}
