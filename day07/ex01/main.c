/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdomanta <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/17 13:55:36 by jdomanta          #+#    #+#             */
/*   Updated: 2019/07/17 14:30:18 by jdomanta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	*ft_range(int min, int max);

int	main(void)
{
	int min;
	int max;
	int *des;
	char a;

	a = 'y';
	while( a == 'y' || a == 'Y')
	{
		printf("Enter min: ");
		scanf(" %d", &min);
		printf("\nEnter max: ");
		scanf(" %d", &max);
		des = ft_range(min, max);
		int i;	
		for(i = 0; i < (max - min); i++)
			printf("%d", des[i]);
		printf("\nContinue? (y?): ");
		scanf(" %c", &a);
		printf("\n");
	}

	return (0);
}
