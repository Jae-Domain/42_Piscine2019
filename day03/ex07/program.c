/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdomanta <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/11 21:30:35 by jdomanta          #+#    #+#             */
/*   Updated: 2019/07/11 21:41:35 by jdomanta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

void	ft_putchar(char c);
void	ft_putstr(char *str);

int		main(void)
{
	char	*ptr;

	ptr = "You can do it, Janelle!!";
	ft_putstr(ptr);
	ft_putchar('\n');
	return (0);
}

void	ft_putstr(char *str)
{
	int index = 0;
	while (str[index] != '\0')
	{
		ft_putchar(str[index]);
		index ++;
	}
}

void	ft_putchar(char c)
{
	write (1, &c, 1);
}
