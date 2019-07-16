/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdomanta <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/12 16:39:16 by jdomanta          #+#    #+#             */
/*   Updated: 2019/07/15 22:17:07 by jdomanta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int		ft_strcat(char *dest, char *src);

int main(void)
{
	char s1[5];
	char s2[4];
	char ch;

	s1[0] = 'a';
	s1[1] = '\0';
	s2[0] = 'b';
	s2[1] = ' ';
	s2[3] = '\0';
	ch = 'y';
	while (ch == ('y' | 'Y'))
	{
		printf("The string  %s + %s", s1, s2);
		ft_strcat(s1, s2);
		printf(" = %s", s1);
		printf("\nContinue? Y/N: ");
		scanf (" %c", &ch);
	}
	printf("Thank you!\n");
	return (0);
}
