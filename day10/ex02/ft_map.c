/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdomanta <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/22 16:46:41 by jdomanta          #+#    #+#             */
/*   Updated: 2019/07/22 17:17:00 by jdomanta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_map(int *tab, int length, int (*f)(int))
{
	int i;
	int *array;

	i = -1;
	array = malloc(sizeof(int) * length);
	while(++i < length)
	{
		array[i] = f(tab[i]);
	}
	return (array);
}
