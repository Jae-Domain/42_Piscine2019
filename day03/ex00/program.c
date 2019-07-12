/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ft.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdomanta <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/11 19:52:42 by jdomanta          #+#    #+#             */
/*   Updated: 2019/07/11 20:09:20 by jdomanta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <stdlib.h>

void	ft_ft(int *nbr);

//Prints out value of pointer
int		main(void)
{
	int	*ptr;
	ptr = NULL;
	ft_ft(ptr);

	printf("*ptr = %d\n", *ptr); // use %d and *iptr to print value pointed to by pointer
	return (0);
}
void	ft_ft(int *nbr)
{
	*nbr = 42;
}

