/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_wordtab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdomanta <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/22 21:43:37 by jdomanta          #+#    #+#             */
/*   Updated: 2019/07/23 11:49:22 by jdomanta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_sort_wordtab(char **tab)
{
	int length;
	char *x;
	int i;
	int j;
	void *tmp;

	i = -1;
	x = *tab;
	length = 0;
	while (* != '\0')
	{
		*x++;
		length++;
	}	
	while (++i < length)
	{
		j = i + 1;
		while (j < length)
		{
			if (tab[i][j] > tab[i][j + 1])
			{
			
			}
		}		
	}

}
