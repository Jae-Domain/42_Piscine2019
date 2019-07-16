/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdomanta <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/12 16:39:16 by jdomanta          #+#    #+#             */
/*   Updated: 2019/07/15 19:28:53 by jdomanta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

char	*ft_strlowcase(char *str);

int main(void)
{
	char s1[4];
	int n;
	char ch;
	s1[0] = ' ';
	s1[1] = '.';
	s1[2] = '\0';
	ch = 'y';
	n = 4;
	while (ch == ('y' | 'Y'))
	{
		printf("Comparison string is %s\n", s1);
		printf("Enter string to compare: ");
//		scanf("%s", s2);
		ft_strlowcase(s1);
		printf("Uppercase:  %s \n", s1);
		printf("\nContinue? Y/N: ");
		scanf (" %c", &ch);
	}
	printf("Thank you!\n");
	return (0);
}
