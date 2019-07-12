/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdomanta <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/10 15:02:57 by jdomanta          #+#    #+#             */
/*   Updated: 2019/07/10 20:42:24 by jdomanta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_alphabet(void);

int		ft_putchar(char c);

int		main(void)
{
	ft_print_alphabet();
	return (0);
}

int		ft_putchar(char c)
{
	write(1, &c, 1);
	return (0);
}

void	ft_print_alphabet(void)
{
	char letter;

	letter = 'a';
	while (letter <= 'z')
	{
		ft_putchar(letter);
		letter += 1;
	}
}
