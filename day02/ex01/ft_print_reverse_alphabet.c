/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdomanta <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/10 20:47:41 by jdomanta          #+#    #+#             */
/*   Updated: 2019/07/11 12:03:48 by jdomanta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_print_reverse_alphabet(void);

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
