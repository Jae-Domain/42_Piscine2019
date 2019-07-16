/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdomanta <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/15 21:46:05 by jdomanta          #+#    #+#             */
/*   Updated: 2019/07/15 21:53:02 by jdomanta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_str_is_printable(char *str)
{
	int index;

	index = 0;
	while (str[index] != '\0')
	{
		if (str[index] >= 32)
			index++;
		else
			return (0);
	}
	return (1);
}
