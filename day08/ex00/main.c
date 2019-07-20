/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdomanta <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/18 16:21:15 by jdomanta          #+#    #+#             */
/*   Updated: 2019/07/18 21:57:12 by jdomanta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
char 	**ft_split_whitespaces(char *str);

int	main(void)
{
	char str[15] = "abc de	fg  hi";
	str[14] = '\0';
	char **words = ft_split_whitespaces(str);
	int i = 0;
	while (words[i] != 0)
	{
		printf("Word: ");
		printf("%s", words[i]);
		printf("\n");
		i++;
	}
	return (0);
}
