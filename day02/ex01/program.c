/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdomanta <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/10 20:47:41 by jdomanta          #+#    #+#             */
/*   Updated: 2019/07/10 20:51:10 by jdomanta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_reverse_alphabet(void);

int		ft_putchar(char c);

int		main(void)
{
	ft_print_reverse_alphabet();
	return (0);
}

int		ft_putchar(char c)
{
	write(1, &c, 1);
	return (0);
}

void	ft_print_reverse_alphabet(void)
{
	char letter;

	letter = 'z';
	while (letter >= 'a')
	{
		ft_putchar(letter);
		letter -= 1;
	}
	ft_putchar('\n');
}
