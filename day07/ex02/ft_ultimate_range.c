/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdomanta <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/17 14:34:01 by jdomanta          #+#    #+#             */
/*   Updated: 2019/07/17 16:27:01 by jdomanta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_ultimate_range(int **range, int min, int max)
{
	int index;
	int *tmp;

	if (min >= max)
	{
		*range = 0;
		return (0);
	}
	index = max - min;
	tmp = malloc(4 * index);
	index = 0;
	while (min != max)
	{
		tmp[index] = min;
		min++;
		index++;
	}
	*range = tmp;
	return (index);
}
