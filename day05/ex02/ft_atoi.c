/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdomanta <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/15 13:59:49 by jdomanta          #+#    #+#             */
/*   Updated: 2019/07/15 14:56:06 by jdomanta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		is_digit(char c);
int		convert_string(char *str, int index);

int		ft_atoi(char *str)
{
	int		neg;
	int		index;
	int		num;

	neg = 1;
	index = 0;
	while (str[index] == ' ')
		index++;
	if (str[index] == '-')
	{
		neg = -1;
		index++;
	}
	else if (str[index] == '+')
		index++;
	if (!is_digit(str[index]))
		return (0);
	num = convert_string(str, index);
	num *= neg;
	return (num);
}

int		convert_string(char *str, int index)
{
	int		count;
	int		num;
	long	tmp;

	tmp = 0;
	count = 0;
	while (is_digit(str[index]) && ++count <= 10)
	{
		tmp += str[index] - '0';
		index += 1;
		tmp *= 10;
	}
	num = tmp / 10;
	return (num);
}

int		is_digit(char c)
{
	if (c >= '0' && c <= '9')
		return (1);
	return (0);
}
