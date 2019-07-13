/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdomanta <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/12 13:43:50 by jdomanta          #+#    #+#             */
/*   Updated: 2019/07/12 15:02:37 by jdomanta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <time.h>

int		ft_iterative_factorial(int nb);

int main(void)
{
	int n;
	int ans;
	char ch;
	clock_t t;
	double ex_time;

	ch = 'Y';
	while (ch == 'Y' || ch == 'y')
	{
		printf("Enter a number: ");
		scanf("%d", &n);
		printf("Your number is %d!\n", n);
		t = clock();
		ans = ft_iterative_factorial(n);
		t = clock() - t;
		ex_time = ((double)t)/CLOCKS_PER_SEC;
		printf("%d! = %d\n", n, ans);
		printf("Function took %f seconds to execute \n", ex_time);
		printf("Continue? Y/N: ");
		scanf (" %c", &ch);
	}
	printf("Thank you!\n");
	return (0);
}

int		ft_iterative_factorial(int nb)
{
	int p;

	if (nb < 0)
	{
		return (0);
	}
	p = 1;
	while (nb > 0)
	{
		p *= nb;
		nb--;
	}
	return (p);
}
