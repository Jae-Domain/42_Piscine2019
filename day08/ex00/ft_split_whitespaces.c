/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split_whitespaces.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdomanta <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/18 16:10:15 by jdomanta          #+#    #+#             */
/*   Updated: 2019/07/19 14:13:14 by jdomanta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int		is_whitespace(char letter);
int		count_words(char *str);
int		count_letters(char *str);

char	**ft_split_whitespaces(char *str)
{
	int		wordcount;
	char	**words;
	int		i;
	int		j;

	i = 0;
	wordcount = count_words(str);
	words = (char **)malloc((wordcount + 1) * sizeof(char *));
	while (*str != '\0')
	{
		words[i] = (char *)malloc((count_letters(str) + 1) * sizeof(char));
		while (is_whitespace(str[0]) && (*str != '\0'))
			str++;
		j = 0;
		while (!(is_whitespace(*str)) && (*str != '\0'))
			words[i][j++] = *str++;
		words[i++][j] = '\0';
	}
	words[i] = (char *)malloc(1);
	words[i] = NULL;
	return (words);
}

int		count_letters(char *str)
{
	int letters;

	letters = 0;
	while (!is_whitespace(*str) && (*str != '\0'))
	{
		str++;
		letters++;
	}
	return (letters);
}

int		is_whitespace(char letter)
{
	if (letter == ' ' || letter == '\t' || letter == '\n')
		return (1);
	return (0);
}

int		count_words(char *str)
{
	int wordcount;

	wordcount = 0;
	while (*str != '\0')
	{
		if (is_whitespace(*str))
			str++;
		else if (!(is_whitespace(*str)) && (*str != '\0'))
		{
			while (*str != '\0' && !(is_whitespace(*str)))
				str++;
			wordcount++;
		}
	}
	return (wordcount);
}
