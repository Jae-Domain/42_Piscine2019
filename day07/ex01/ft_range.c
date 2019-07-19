/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdomanta <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/17 14:09:08 by jdomanta          #+#    #+#             */
/*   Updated: 2019/07/17 16:27:56 by jdomanta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_range(int min, int max)
{
	int *array;
	int index;

	array = 0;
	if (min >= max)
		return (array);
	index = max - min;
	array = malloc(4 * index);
	index = 0;
	while (min != max)
	{
		array[index] = min;
		min++;
		index++;
	}
	return (array);
}
