/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdomanta <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/12 15:57:25 by jdomanta          #+#    #+#             */
/*   Updated: 2019/07/12 16:31:51 by jdomanta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <time.h>

int	ft_sqrt(int nb);
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
		t = clock();
		ans = ft_sqrt(n);
		t = clock() - t;
		ex_time = ((double)t)/CLOCKS_PER_SEC;
		printf("The square root of %d is = %d\n", n, ans);
		printf("Function took %f seconds to execute \n", ex_time);
		printf("Continue? Y/N: ");
		scanf (" %c", &ch);
	}
	printf("Thank you!\n");
	return (0);
}

int		ft_sqrt(int nb)
{
	int i;

	if (nb == 0 || nb == 1)
	{
		return nb;
	}
   	i = 2;
	while ( i++ <= nb / 2)
	{
		if (i == nb / i && nb % i == 0)
		{
			return (i);
		}
	}
	return (0);
}
