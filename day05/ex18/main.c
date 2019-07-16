/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdomanta <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/12 16:39:16 by jdomanta          #+#    #+#             */
/*   Updated: 2019/07/15 23:22:59 by jdomanta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int		ft_strlcat(char *dest, char *src, unsigned int size);

int main(void)
{
	char s1[5];
	char s2[6];
	char ch;

	s1[0] = 'a';
	s1[1] = '\0';
	s2[0] = 'b';
	s2[1] = 'c';
	s2[2] = 's';
	s2[3] = '\0';
	ch = 'y';
	int n = 5;
	int x = 0;
	while (ch == ('y' | 'Y'))
	{
		printf("The string  %s + %s", s1, s2);
		x =	ft_strlcat(s1, s2, n);
		printf(" = %s", s1);
		printf(" which has a length of %d", x);
		printf("\nContinue? Y/N: ");
		scanf (" %c", &ch);
	}
	printf("Thank you!\n");
	return (0);
}
