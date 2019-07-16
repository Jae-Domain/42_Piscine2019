/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdomanta <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/12 16:39:16 by jdomanta          #+#    #+#             */
/*   Updated: 2019/07/15 21:05:29 by jdomanta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

char	*ft_strcapitalize(char *str);

int main(void)
{
	char s1[17];
	int n;
	char ch;
	s1[0] = 'a';
	s1[1] = '2';
	s1[2] = 'a';
	s1[3] = '1';
	s1[4] = ' ';
	s1[5] = '!';
	s1[6] = 'A';
	s1[7] = ' ';
	s1[8] = 'x';
	s1[9] = 'A';
	s1[10] = ' ';
	s1[11] = 's';
	s1[12] = 's';
	s1[13] = ' ';
	s1[14] = 'S';
	s1[15] = 'S';
	s1[16] = '\0';
	ch = 'y';
	n = 4;
	while (ch == ('y' | 'Y'))
	{
		printf("Comparison string is %s\n", s1);
//		scanf("%s", s2);
		ft_strcapitalize(s1);
		printf("Uppercase:  %s \n", s1);
		printf("\nContinue? Y/N: ");
		scanf (" %c", &ch);
	}
	printf("Thank you!\n");
	return (0);
}
