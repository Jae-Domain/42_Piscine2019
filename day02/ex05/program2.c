/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdomanta <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/10 22:14:12 by jdomanta          #+#    #+#             */
/*   Updated: 2019/07/11 18:19:32 by jdomanta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);
void	ft_print_comb2(void);

int		main(void)
{
	ft_print_comb2();
	return (0);
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_comb2(void)
{
	int one;
	int two;

	one = 0;
	two = 1;
	while (one <= 98 && two <= 99)
	{
		ft_putchar('0' + (one / 10));
		ft_putchar('0' + (one % 10));
		ft_putchar(' ');
		ft_putchar('0' + (two / 10));
		ft_putchar('0' + (two % 10));
		two += 1;
		if (one < 98)
		{
			ft_putchar(',');
			ft_putchar(' ');
		}
		if (two > 99)
		{
			one += 1;
			two = one + 1;
		}
	}
}
