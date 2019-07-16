/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdomanta <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/15 22:25:29 by jdomanta          #+#    #+#             */
/*   Updated: 2019/07/15 22:35:52 by jdomanta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, int nb)
{
	int index;
	int i2;

	index = 0;
	i2 = 0;
	while (dest[index] != '\0')
		index++;
	while (src[i2] != '\0' && --nb >= 0)
	{
		dest[index + i2] = src[i2];
		i2++;
	}
	dest[index + i2] = '\0';
	return (dest);
}
