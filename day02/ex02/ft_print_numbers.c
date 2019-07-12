/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdomanta <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/10 20:53:36 by jdomanta          #+#    #+#             */
/*   Updated: 2019/07/11 18:13:53 by jdomanta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_print_numbers(void);

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
