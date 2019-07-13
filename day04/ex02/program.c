/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdomanta <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/12 15:09:27 by jdomanta          #+#    #+#             */
/*   Updated: 2019/07/12 15:23:24 by jdomanta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <time.h>

int		ft_iterative_power(int nb, int power);

int main(void)
{
	int n;
	int p;
	int ans;
	char ch;
	clock_t t;
	double ex_time;

	ch = 'Y';
	while (ch == 'Y' || ch == 'y')
	{
		printf("Enter a number: ");
		scanf("%d", &n);
		printf("Enter a power: ");
		scanf("%d", &p);
		t = clock();
		ans = ft_iterative_power(n,p);
		t = clock() - t;
		ex_time = ((double)t)/CLOCKS_PER_SEC;
		printf("%d to the %d power  = %d\n", n, p, ans);
		printf("Function took %f seconds to execute \n", ex_time);
		printf("Continue? Y/N: ");
		scanf (" %c", &ch);
	}
	printf("Thank you!\n");
	return (0);
}

int		ft_iterative_power(int nb, int power)
{
	int ans;

	ans = 1;
	if (power < 0)
	{
		return (0); 
	}
	while(power-- >= 1)
	{
		ans *= nb;
	}
	return (ans);
}
