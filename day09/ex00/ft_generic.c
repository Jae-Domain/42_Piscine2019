/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_generic.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdomanta <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/18 19:07:16 by jdomanta          #+#    #+#             */
/*   Updated: 2019/07/18 19:14:29 by jdomanta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_generic(void)
{
	char *c;
	char n;

	n = '\n';
	c = "Tut tut ; Tut tut";
	while (*c != '\0')
	{
		write(1, c, 1);
		c++;
	}
	write(1, &n, 1);
}
