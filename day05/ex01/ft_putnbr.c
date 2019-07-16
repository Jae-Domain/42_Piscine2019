/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdomanta <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/15 12:26:48 by jdomanta          #+#    #+#             */
/*   Updated: 2019/07/15 13:54:43 by jdomanta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);
void	ft_printstr(char *str);

void	ft_putnbr(int nb)
{
	char	str[10];
	char	*max;
	int		index;

	max = "-2147482648";
	index = -1;
	if (nb < -2147482647)
	{
		ft_printstr(max);
		return ;
	}
	if (nb < 0)
	{
		ft_putchar('-');
		nb *= -1;
	}
	while (nb > 0)
	{
		index++;
		str[index] = '0' + (nb % 10);
		nb /= 10;
	}
	index++;
	while (--index >= 0)
		ft_putchar(str[index]);
}

void	ft_printstr(char *str)
{
	int index;

	index = 0;
	while (str[index] != '\0')
	{
		ft_putchar(str[index]);
		index++;
	}
}
