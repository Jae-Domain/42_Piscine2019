/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdomanta <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/12 16:39:16 by jdomanta          #+#    #+#             */
/*   Updated: 2019/07/15 18:13:19 by jdomanta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int		ft_strncmp(char *s1, char *s2, unsigned int n);
void	ft_putstr(char *str);

int main(void)
{
	char *s1;
	char *s2;
	int n;
	char ch;
	int x;
	s1 = "Pikachu";
	s2 = "Pikxchu";
	ch = 'y';
	n = 4;
	while (ch == ('y' | 'Y'))
	{
		printf("Comparison string is %s\n", s1);
		printf("Enter string to compare: ");
//		scanf("%s", s2);
		x  = ft_strncmp(s1, s2, n);
		printf("String comparison value: %d \n", x);
		printf("\nContinue? Y/N: ");
		scanf (" %c", &ch);
	}
	printf("Thank you!\n");
	return (0);
}
