/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdomanta <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/10 21:23:30 by jdomanta          #+#    #+#             */
/*   Updated: 2019/07/11 18:18:42 by jdomanta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_print_comb(void);

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
