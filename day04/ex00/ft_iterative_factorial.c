/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdomanta <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/12 13:43:50 by jdomanta          #+#    #+#             */
/*   Updated: 2019/07/12 15:03:31 by jdomanta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_iterative_factorial(int nb);

int		ft_iterative_factorial(int nb)
{
	int p;

	if (nb < 0)
	{
		return (0);
	}
	p = 1;
	while (nb > 0)
	{
		p *= nb;
		nb--;
	}
	return (p);
}
