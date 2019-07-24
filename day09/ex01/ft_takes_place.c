/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_takes_place.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdomanta <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/18 19:15:31 by jdomanta          #+#    #+#             */
/*   Updated: 2019/07/18 20:10:44 by jdomanta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_takes_place(int hour)
{
	int		hour2;
	char	t1;
	char	t2;

	t1 = 'A';
	t2 = 'A';
	hour2 = hour + 1;
	if (hour == 24)
		t1 = 'A';
	else if (hour >= 12)
		t1 = 'P';
	if (hour == 0)
		hour = 12;
	if (hour > 12)
		hour -= 12;
	if (hour2 >= 24)
		t2 = 'A';
	else if (hour2 >= 12)
		t2 = 'P';
	while (hour2 > 12)
		hour2 -= 12;
	printf("THE FOLLOWING TAKES PLACE BETWEEN %d.00 %c.M ", hour, t1);
	printf("AND %d.00 %c.M.\n", hour2, t2);
}
