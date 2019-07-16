/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdomanta <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/15 16:57:43 by jdomanta          #+#    #+#             */
/*   Updated: 2019/07/15 21:25:15 by jdomanta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strstr(char *str, char *to_find)
{
	char *ptr;
	int index;
	int i2;

	ptr = NULL;
	index = 0;
	i2 = 0;
	if (to_find[0] == '\0')
		return (to_find);
	while (str[index] != '\0' && ptr == NULL) 
	{
		if (str[index] == to_find[i2])
		{
			i2++;
			if (to_find[i2] == '\0')
				ptr = &str[index];
		}
		else
			i2 = 0;
	}
	return (ptr);
}
