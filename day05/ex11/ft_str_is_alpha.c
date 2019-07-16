/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdomanta <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/15 21:11:35 by jdomanta          #+#    #+#             */
/*   Updated: 2019/07/15 21:24:22 by jdomanta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_str_is_alpha(char *str)
{
	int index;

	index = 0;
	while (str[index] != '\0')
	{
		if (str[index] >= 'A' && str[index <= 'Z'])
			index++;
		else if (str[index] >= 'a' && str[index <= 'z'])
			index++;
		else
			return (0);
	}
	return (1);
}
