/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split_whitespaces.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdomanta <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/17 16:41:01 by jdomanta          #+#    #+#             */
/*   Updated: 2019/07/17 22:50:15 by jdomanta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#define	WORDEND(word) word == '\t' || word == ' ' || word == '\n'
#include <stdlib.h>

int		wordcount(char *str);
int		word_length(char *str);

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
		while (WORDEND(str[0]) && str[0] == '\0')
			str++;
		while (!(WORDEND(str[0])) && (str[0] != '\0'))
			word[i++] = *str++;
		word[i] = '\0';
		words[words_done++] = word;
		i = 0;
	}
	words[words_done] = 0;
	return (words);
}

int		word_length(char *str)
{
	int index;

	index = 0;
	while (!(WORDEND(str[index])))
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
		if (WORDEND(str[index]))
			count++;
		index++;
	}
	return (count + 1);
}
