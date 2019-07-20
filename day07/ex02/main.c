/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdomanta <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/17 13:55:36 by jdomanta          #+#    #+#             */
/*   Updated: 2019/07/17 15:48:47 by jdomanta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_ultimate_range(int **range, int min, int max);

int	main(void)
{
	int min;
	int max;
	int *des;
	int range;
	char a;

	a = 'y';
	while( a == 'y' || a == 'Y')
	{
		printf("Enter min: ");
		scanf(" %d", &min);
		printf("\nEnter max: ");
		scanf(" %d", &max);
		range = ft_ultimate_range(&des, min, max);

		int i;	
		for(i = 0; i < (max - min); i++)
			printf("%d", des[i]);
		printf("\n Has a range of %d", range);
		printf("\nContinue? (y?): ");
		scanf(" %c", &a);
		printf("\n");
	}

	return (0);
}
