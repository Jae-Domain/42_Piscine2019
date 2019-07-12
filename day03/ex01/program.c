/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_ft.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdomanta <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/11 20:10:19 by jdomanta          #+#    #+#             */
/*   Updated: 2019/07/11 20:19:44 by jdomanta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

void	ft_ultimate_ft(int *********nbr);

int		main(void)
{
	int *********ptr;
	ft_ultimate_ft(*********ptr);
	printf("pointer = %d\n", **********ptr);
	return (0);
}
void	ft_ultimate_ft(int *********nbr)
{
	*********nbr = 42;
}
