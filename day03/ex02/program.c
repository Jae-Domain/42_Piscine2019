/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdomanta <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/11 20:30:51 by jdomanta          #+#    #+#             */
/*   Updated: 2019/07/11 20:52:30 by jdomanta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

void	ft_swap(int *a, int *b);

int		main(void)
{
	int a;
	int b;
	int *ptra;
	int *ptrb;

	a = 1;
	b = 2;
	ptra = &a;
	ptrb = &b;

	printf("Value of a: %d\n", a);
	printf("Value of b: %d\n", b);
	printf("Value of ptra: %d\n", *ptra);
	printf("Value of ptrb: %d\n", *ptrb);
	printf("Address from ptra: %p\n", ptra);
	printf("Address from ptrb: %p\n", ptrb);

	printf("Swapping addresses...\n");
	ft_swap(ptra, ptrb);

	printf("Value of a: %d\n", a);
	printf("Value of b: %d\n", b);
	printf("Value of ptra: %d\n", *ptra);
	printf("Value of ptrb: %d\n", *ptrb);
	printf("Address from ptra: %p\n", ptra);
	printf("Address from ptrb: %p\n", ptrb);

	return (0);
}

void	ft_swap(int *a, int *b)
{
	int tmp;

	tmp = *b;
	*b = *a;
	*a = tmp;
}
