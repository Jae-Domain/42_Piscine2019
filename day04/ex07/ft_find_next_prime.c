/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdomanta <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/13 15:47:49 by jdomanta          #+#    #+#             */
/*   Updated: 2019/07/13 16:51:27 by jdomanta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_find_next_prime(int nb)
{
	int check;
	int index;

	check = nb;
	if (check <= 2)
	{
		return (2);
	}
	index = 2;
	if (check % 2 == 0)
	{
		check++;
	}
	while (index++ <= check / 2)
	{
		if (check % index == 0)
		{
			check += 2;
			index = 2;
		}
	}
	return (check);
}
