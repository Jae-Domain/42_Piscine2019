/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_concat_params.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdomanta <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/17 15:49:01 by jdomanta          #+#    #+#             */
/*   Updated: 2019/07/18 13:32:50 by jdomanta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_concat_params(int argc, char **argv)
{
	int		i;
	int		j;
	int		k;
	char	*str;

	str = malloc(argc);
	i = 1;
	j = 0;
	while (++i < argc)
	{
		k = 0;
		while (argv[i][k] != '\0')
		{
			str[j] = argv[i][k];
			k++;
			j++;
		}
		str[j] = '\n';
		j++;
	}
	str[j] = '\0';
	return (str);
}
