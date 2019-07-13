/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdomanta <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/12 15:09:27 by jdomanta          #+#    #+#             */
/*   Updated: 2019/07/12 15:26:04 by jdomanta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_iterative_power(int nb, int power)
{
	int ans;

	ans = 1;
	if (power < 0)
	{
		return (0);
	}
	while (power-- >= 1)
	{
		ans *= nb;
	}
	return (ans);
}
