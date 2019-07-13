/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdomanta <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/12 16:39:16 by jdomanta          #+#    #+#             */
/*   Updated: 2019/07/13 15:43:40 by jdomanta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <time.h>

int	ft_is_prime(int nb);

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
		t = clock();
		ans = ft_is_prime(n);
		t = clock() - t;
		ex_time = ((double)t)/CLOCKS_PER_SEC;
		if (ans == 0)
		{
			printf("%d is not prime!\n", n);
		}
		else
		{
			printf("%d is prime!\n", n);
		}
		printf("Function took %f seconds to execute \n", ex_time);
		printf("Continue? Y/N: ");
		scanf (" %c", &ch);
	}
	printf("Thank you!\n");
	return (0);
}
