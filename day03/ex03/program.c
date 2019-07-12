/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdomanta <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/11 20:57:51 by jdomanta          #+#    #+#             */
/*   Updated: 2019/07/11 21:15:34 by jdomanta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

void	ft_div_mod(int a, int b, int *div, int *mod);

int		main(void)
{
	int a;
	int b;
	int c;
	int d;

	int *pd;
	int *pm;

	a = 12;
	b = 6;
	c = 0;
	d = 0;

	pm = &c;	
	pd = &d;

	ft_div_mod(a, b, pd, pm);

	printf("Value of a: %d\n", a);
	printf("Value of b: %d\n", b);
	printf("a / b: %d\n", *pd);
	printf("a / b: %d\n", d);
	printf("a mod b: %d\n", *pm);
	printf("a mod b: %d\n", c);

	return (0);
}
void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}
