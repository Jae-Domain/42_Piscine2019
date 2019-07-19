/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdomanta <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/17 12:52:37 by jdomanta          #+#    #+#             */
/*   Updated: 2019/07/17 14:05:45 by jdomanta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strdup(char *src)
{
	int		index;
	char	*dup;

	index = 0;
	while (src[index] != '\0')
		index++;
	dup = malloc(index);
	index = 0;
	while (src[index] != '\0')
	{
		dup[index] = src[index];
		index++;
	}
	dup[index] = '\0';
	return (dup);
}
