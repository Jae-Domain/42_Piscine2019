/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   program.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdomanta <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/11 21:20:00 by jdomanta          #+#    #+#             */
/*   Updated: 2019/07/11 21:26:53 by jdomanta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

void	ft_ultimate_div_mod(int *a, int *b);

int		main(void)
{

	int c;
	int d;

	int *pd;
	int *pm;

	c = 13;
	d = 2;

	pm = &c;	
	pd = &d;

	printf("Value of a: %d\n", c);
	printf("Value of b: %d\n", d);

	ft_ultimate_div_mod( pm, pd);

	printf("a / b: %d\n", c);
	printf("a / b: %d\n", *pm);
	printf("a mod b: %d\n", d);
	printf("a mod b: %d\n", *pd);

	return (0);
}

void	ft_ultimate_div_mod(int*a, int*b)
{
	int q;
	int m;

	q = *a / *b;
	m = *a % *b;
	*a = q;
	*b = m;
}
