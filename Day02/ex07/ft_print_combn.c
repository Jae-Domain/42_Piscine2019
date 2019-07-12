/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdomanta <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/11 13:17:57 by jdomanta          #+#    #+#             */
/*   Updated: 2019/07/11 18:22:46 by jdomanta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_print_combn(int n);

void	ft_print_combn(int n)
{
	int index;
	int current;
	int arr[n];

	ft_putchar(n + '0');
	index = 0;
	while (index < n-1)
	{
		arr[index] = index;
		index ++;
	}
	while (arr[0] < (10 - n))
	{
		current = 0;
		while (current < n)
		{
			ft_putchar(arr[current] + '0');
			current ++;
		}
		arr [index] ++;
		ft_putchar(arr[index] + '0');
		ft_putchar(index + '0');
		if (arr[index] >= ((9 - n) - index))
		{
			index --;
		}
	}
}
