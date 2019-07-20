/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_words_tables.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdomanta <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/18 22:01:38 by jdomanta          #+#    #+#             */
/*   Updated: 2019/07/18 22:23:41 by jdomanta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#ifndef WHITESPACE
#define WHITESPACE
char	**ft_split_whitespaces(char *str);
void	ft_putchar(char c);
#endif

void	ft_print_words_tables(char **tab)
{
	int i;
	int j;

	i = 0;
	while (tab[i][0] != 0)
	{
		j = 0;
		while (tab[i][j] != '\0')
		{
			ft_putchar(tab[i][j++]);
		}
		ft_putchar('\n');
		i++;
	}
}
