/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdomanta <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/10 20:53:36 by jdomanta          #+#    #+#             */
/*   Updated: 2019/07/10 20:59:30 by jdomanta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_numbers(void);

int		ft_putchar(char c);

int		main(void)
{
	ft_print_numbers();
	return (0);
}

int		ft_putchar(char c)
{
	write(1, &c, 1);
	return (0);
}

void	ft_print_numbers(void)
{
	int number;

	number = 0;
	while (number <= 9)
	{
		ft_putchar('0' + number);
		number += 1;
	}
	ft_putchar('\n');
}
