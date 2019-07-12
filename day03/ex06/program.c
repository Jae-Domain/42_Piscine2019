/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdomanta <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/11 21:30:35 by jdomanta          #+#    #+#             */
/*   Updated: 2019/07/11 21:57:17 by jdomanta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int		ft_strlen(char *str);

int		main(void)
{
	char	*ptr;

	ptr = "abcd";
	printf("Number of characters in string: %d", ft_strlen(ptr));
	printf("\n");
	return (0);
}

int		ft_strlen(char *str)
{
	int index = 0;
	while (str[index] != '\0')
	{
		index++;
	}
	return (index);
}
