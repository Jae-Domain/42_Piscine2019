/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdomanta <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/15 16:27:14 by jdomanta          #+#    #+#             */
/*   Updated: 2019/07/15 16:56:55 by jdomanta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	int index;
	int x;

	x = n;
	index = 0;
	while ((src[index] != '\0') && (--x > 0))
	{
		dest[index] = src[index];
		index++;
	}
	while (--x >= 0)
	{
		dest[index] = '0';
		index++;
	}
	dest[index] = '\0';
	return (dest);
}
