/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdomanta <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/12 16:39:16 by jdomanta          #+#    #+#             */
/*   Updated: 2019/07/15 20:06:36 by jdomanta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

char	*ft_strstr(char *str, char *to_find);
void	ft_putstr(char *str);

int main(void)
{
	char ch;
	char str[12];
	char *cp;
	char *s2;
	int n;

	str[0] = 'H';
	str[1] = 'e';
	str[2] = 'l';
	str[3] = 'l';
	str[4] = 'o';
	str[5] = ' ';
	str[6] = 'W';
	str[7] = 'o';
	str[8] = 'r';
	str[9] = 'l';
	str[10] = 'd';
	str[11] = '!';
	str[12] = '\0';
	ch = 'y';
	n = 13;
	s2 = "ello";
	while (ch == ('y' | 'Y'))
	{
		printf("searching...\n");
		cp = ft_strstr(str, s2);
		printf("Printing original string: \n");
//		ft_putstr(str);
		printf("\nPrinting duplicate string:");
		ft_putstr(cp);
		printf("\nContinue? Y/N: ");
		scanf (" %c", &ch);
	}
	printf("Thank you!\n");
	return (0);
}
