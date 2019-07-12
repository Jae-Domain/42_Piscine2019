/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdomanta <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/11 22:02:25 by jdomanta          #+#    #+#             */
/*   Updated: 2019/07/11 23:08:54 by jdomanta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

char	*ft_strrev(char *str);
void	ft_putstr(char *str);
void	ft_putchar(char c);

int		main(void)
{
	char	*ptr;
	char	*rev;

	ptr = "You can do it, Janelle!!";
	ft_putstr(ptr);
	ft_putchar('\n');
	rev = ft_strrev(ptr);
	ft_putstr(rev);
	return (0);
}

char	*ft_strrev(char *str)
{
	int index;
	char tmpa;
	char tmpb;
    int	strlen;

	index = 0;
	strlen = 0;
	while (str[index] != '\0')
	{
		index ++;
	}
	strlen = index - 1;
	index = 0;
	while (index < strlen/2)
	{
		ft_putchar( str[index]);
		ft_putchar('a');
		tmpa = str[strlen - index];
		tmpb = str[index];
		*(str + (strlen - index)) = tmpb;
		ft_putchar(str[index]);
		str[index] = tmpa;
		index++;
	}
	return (str);
}

void	ft_putstr(char *str)
{
	int index = 0;
	while (str[index] != '\0')
	{
		ft_putchar(str[index]);
		index++;
	}
}

void	ft_putchar(char c)
{
	write (1, &c, 1);
}	

