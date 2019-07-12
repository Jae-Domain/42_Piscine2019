/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdomanta <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/10 19:22:40 by jdomanta          #+#    #+#             */
/*   Updated: 2019/07/11 18:15:04 by jdomanta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_is_negative(int n);

void	ft_is_negative(int n)
{
	if (n > 0)
	{
		ft_putchar('P');
	}
	else
	{
		ft_putchar('N');
	}
	ft_putchar('\n');
}