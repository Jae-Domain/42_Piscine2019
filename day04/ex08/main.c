/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdomanta <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/12 16:39:16 by jdomanta          #+#    #+#             */
/*   Updated: 2019/07/13 16:19:50 by jdomanta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <time.h>

int	ft_eight_queens_puzzle(void);

//Calculates the number of possibilities to place 8 queens on chessboard
int main(void)
{
	int n;
	clock_t t;
	double ex_time;

		t = clock();
		n = ft_eight_queens_puzzle.c;
		t = clock() - t;
		ex_time = ((double)t)/CLOCKS_PER_SEC;
		printf("There are %d permutations!\n", n);
		printf("Function took %f seconds to execute \n", ex_time);
		printf("Continue? Y/N: ");
		scanf (" %c", &ch);
	}
	printf("Thank you!\n");
	return (0);
}
