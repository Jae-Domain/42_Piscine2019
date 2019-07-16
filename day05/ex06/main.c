/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdomanta <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/12 16:39:16 by jdomanta          #+#    #+#             */
/*   Updated: 2019/07/15 17:36:38 by jdomanta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int		ft_strcmp(char *s1, char *s2);
void	ft_putstr(char *str);

int main(void)
{
	char *s1;
	char *s2;
	int n;
	char ch;

	s1 = "Pikachu";
	s2 = "Pikachu";
	ch = 'y';
	while (ch == ('y' | 'Y'))
	{
		printf("Comparison string is %s\n", s1);
		printf("Enter string to compare: ");
//		scanf("%s", s2);
		n = ft_strcmp(s1, s2);
		printf("String comparison value: %d \n", n);
		printf("\nContinue? Y/N: ");
		scanf (" %c", &ch);
	}
	printf("Thank you!\n");
	return (0);
}
