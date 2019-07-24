/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdomanta <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/18 19:25:21 by jdomanta          #+#    #+#             */
/*   Updated: 2019/07/18 19:30:16 by jdomanta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_takes_place(int hour);

#include <stdio.h>

int	main(void)
{
	int x;
	char ch;
	ch = 'y';
	while (ch != 'n')
	{
		printf("Enter a number: ");
		scanf(" %d", &x);
		ft_takes_place(x);
		printf("Continue?: ");
		scanf(" %c", &ch);
	}
	return (0);	
}
