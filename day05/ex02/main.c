/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdomanta <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/12 16:39:16 by jdomanta          #+#    #+#             */
/*   Updated: 2019/07/15 14:56:53 by jdomanta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	ft_atoi(char *str);

int main(void)
{
	int n;
	char ch;
	char str[12];

	str[0] = ' ';
	str[1] = ' ';
	str[2] = ' ';
	str[3] = ' ';
	str[4] = ' ';
	str[5] = ' ';
	str[6] = ' ';
	str[7] = ' ';
	str[8] = ' ';
	str[9] = ' ';
	str[10] = ' ';
	str[11] = ' ';
	ch = 'y';
	while (ch == ('y' | 'Y'))
	{
		n = ft_atoi(str);
		printf("You entered %d", n);
		printf("\nContinue? Y/N: ");
		scanf (" %c", &ch);
	}
	printf("Thank you!\n");
	return (0);
}
