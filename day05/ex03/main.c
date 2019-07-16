/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdomanta <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/12 16:39:16 by jdomanta          #+#    #+#             */
/*   Updated: 2019/07/15 16:22:15 by jdomanta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

char	*ft_strcpy(char *dest, char *src);
void	ft_putstr(char *str);

int main(void)
{

	char ch;
	char str[12];
	char cp[12];
	char *x;
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
	ch = 'y';
	while (ch == ('y' | 'Y'))
	{
		x = ft_strcpy(cp, str);
		ft_putstr(str);
		ft_putstr(cp);
//		ft_putstr(x);
		printf("\nContinue? Y/N: ");
		scanf (" %c", &ch);
	}
	printf("Thank you!\n");
	return (0);
}
