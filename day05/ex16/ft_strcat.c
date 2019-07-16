/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdomanta <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/15 21:58:59 by jdomanta          #+#    #+#             */
/*   Updated: 2019/07/15 22:30:40 by jdomanta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcat(char *dest, char *src)
{
	int index;
	int i2;

	index = 0;
	i2 = 0;
	while (dest[index] != '\0')
		index++;
	while (src[i2] != '\0')
	{
		dest[index + i2] = src[i2];
		i2++;
	}
	dest[index + i2] = '\0';
	return (dest);
}
