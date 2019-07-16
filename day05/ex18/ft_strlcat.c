/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdomanta <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/15 22:38:33 by jdomanta          #+#    #+#             */
/*   Updated: 2019/07/15 23:29:15 by jdomanta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		str_len(char *s);

unsigned int 	ft_strlcat(char *dest, char *src, unsigned int size)
{
	int index;
	int n;
	int rsize;
	int i2;

	n = size;
	index = 0;
	while (dest[index] != '\0' && n-- > 0)
		index++;	
	i2 = 0;
	while (src[i2] != '\0')
	{
		i2++;
		if (n--  > 1)
			dest[index + i2] = src[i2];
	}
	dest[index + i2] = '\0';
	return (index + i2 + 1);
}
