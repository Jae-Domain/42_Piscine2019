/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdomanta <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/18 16:21:15 by jdomanta          #+#    #+#             */
/*   Updated: 2019/07/18 22:11:48 by jdomanta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
void	ft_print_words_tables(char **tab);
char	**ft_split_whitespaces(char *str);
int	main(void)
{
	char str[15] = "abc de	fg  hi";
	str[14] = '\0';
	char **words = ft_split_whitespaces(str);
	ft_print_words_tables(words);
	return (0);
}
