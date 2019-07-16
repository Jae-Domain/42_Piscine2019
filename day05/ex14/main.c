/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdomanta <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/12 16:39:16 by jdomanta          #+#    #+#             */
/*   Updated: 2019/07/15 21:48:14 by jdomanta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int		ft_str_is_uppercase(char *str);

int main(void)
{
	char *s1 = "ABCD";
//	char *s1 = "KADAbra"
//	char *s1 = "A!akazam"
	char ch;

	ch = 'y';
	while (ch == ('y' | 'Y'))
	{
		printf("The string  %s", s1);
		if (ft_str_is_uppercase(s1) == 1)
			printf(" is uppercase!");
		else if (ft_str_is_uppercase(s1) == 0)
			printf(" is not uppercase...");
		else
			printf(" did not return properly...");
		printf("\nContinue? Y/N: ");
		scanf (" %c", &ch);
	}
	printf("Thank you!\n");
	return (0);
}
