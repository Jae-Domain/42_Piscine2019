/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split_whitespaces.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdomanta <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/17 16:41:01 by jdomanta          #+#    #+#             */
/*   Updated: 2019/07/17 22:59:11 by jdomanta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		wordcount(char *str);
int		word_length(char *str);
int		wordend(char letter);

char	**ft_split_whitespaces(char *str)
{
	char	**words;
	char	*word;
	int		wordn;
	int		i;
	int		words_done;

	words_done = 0;
	wordn = wordcount(str);
	words = (char**)malloc((wordn + 1) * 8);
	i = 0;
	while (words_done < wordn)
	{
		word = (char*)malloc(word_length(str) + 1);
		while (wordend(str[0]) && str[0] != '\0')
			str++;
		while (!(wordend(str[0])) && (str[0] != '\0'))
			word[i++] = *str++;
		word[i] = '\0';
		words[words_done++] = word;
		i = 0;
	}
	words[words_done] = 0;
	return (words);
}

int		wordend(char letter)
{
	if (letter == '\t')
		return (0);
	if (letter == '\n')
		return (0);
	if (letter == ' ')
		return (0);
	return (1);
}

int		word_length(char *str)
{
	int index;

	index = 0;
	while (!(wordend(str[index])))
		index++;
	return (index);
}

int		wordcount(char *str)
{
	int index;
	int count;

	count = 0;
	index = 0;
	while (str[index] != '\0')
	{
		if (wordend(str[index]))
			count++;
		index++;
	}
	return (count + 1);
}
