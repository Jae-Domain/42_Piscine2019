/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdomanta <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/10 21:23:30 by jdomanta          #+#    #+#             */
/*   Updated: 2019/07/10 22:07:08 by jdomanta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		ft_putchar(char c);
void	ft_print_comb(void);

int		main(void)
{
	ft_print_comb();
	return (0);
}

int		ft_putchar(char c)
{
	write(1, &c, 1);
	return (0);
}

void	ft_print_comb(void)
{
	int one;
	int two;
	int three;

	one = 0;
	two = 1;
	three = 2;
	ft_putchar('0' + one);
	ft_putchar('0' + two);
	ft_putchar('0' + three);
	while (one <= 7)
	{
		ft_putchar(',');
		ft_putchar(' ');
		three += 1;
		ft_putchar('0' + one);
		ft_putchar('0' + two);
		ft_putchar('0' + three);
		if (three >= 9)
		{
			two += 1;
			one += 1;
			three = two;
		}
	}
}
