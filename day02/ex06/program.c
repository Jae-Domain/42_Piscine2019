/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdomanta <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/11 12:20:43 by jdomanta          #+#    #+#             */
/*   Updated: 2019/07/11 13:08:17 by jdomanta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		ft_putchar(char c);

void	ft_putnbr(int nb);

int		main(void)
{
	ft_putnbr(-20000003);
	ft_putchar('\n');
	ft_putnbr(-200);
	ft_putchar('\n');
	ft_putnbr(9);
	ft_putchar('\n');
	ft_putnbr(42);
	ft_putchar('\n');
	ft_putnbr(4242);
	ft_putchar('\n');
	ft_putnbr(42424242);
	return (0);
}

int		ft_putchar(char c)
{
	write(1, &c, 1);
	return (0);
}

void	ft_putnbr(int nb)
{
	int number;

	number = nb;
	if (number < 0)
	{
		ft_putchar('-');
		number /= -1;
	}
	if (number > 10)
	{
		ft_putnbr(number / 10);
		ft_putnbr(number % 10);
	}
	else
	{
		ft_putchar(nb + '0');
	}
}
