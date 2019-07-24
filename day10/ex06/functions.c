/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   functions.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdomanta <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/22 20:24:11 by jdomanta          #+#    #+#             */
/*   Updated: 2019/07/22 20:34:00 by jdomanta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "doop.h"

int		is_op(char *x)
{
	if (x[0] == '+')
		return (1);
	if (x[0] == '-' && x[1] == '\0')
		return (1);
	if (x[0] == '/' && x[1] == '\0')
		return (1);
	if (x[0] == '*' && x[1] == '\0')
		return (1);
	if (x[0] == '%' && x[1] == '\0')
		return (1);
	return (0);
}

int		calculate(int x, char *op, int y)
{
	int (*p[5]) (int, int);

	p[0] = do_add;
	p[1] = do_sub;
	p[2] = do_div;
	p[3] = do_mul;
	p[4] = do_mod;
	if (*op == '+' && op[1] == '\0')
		return ((*p[0])(x, y));
	if (*op == '-' && op[1] == '\0')
		return ((*p[1])(x, y));
	if (*op == '/' && op[1] == '\0')
		return ((*p[2])(x, y));
	if (*op == '*' && op[1] == '\0')
		return ((*p[3])(x, y));
	if (*op == '%' && op[1] == '\0')
		return ((*p[4])(x, y));
	else
		return (0);
}

int		ft_atoi(char *x)
{
	int num;
	int sign;

	sign = 1;
	num = 0;
	if (*x == '-' || *x == '+')
	{
		if (*x == '-')
			sign = -1;
		x++;
	}
	while (*x != '\0' && *x >= '0' && *x <= '9')
	{
		num += *x - '0';
		num *= 10;
		x++;
	}
	return (sign * (num / 10));
}

int		is_num(char *x)
{
	if (*x == '-' || *x == '+')
		x++;
	if (*x >= '0' && *x <= '9')
		return (1);
	return (0);
}

void	print_num(int x)
{
	long	y;
	char	str[12];
	int		i;

	i = 0;
	y = x;
	if (y == 0)
	{
		write(1, "0", 1);
	}
	if (y < 0)
	{
		write(1, "-", 1);
		y *= -1;
	}
	while (y != 0)
	{
		str[i] = y % 10 + '0';
		i++;
		y /= 10;
	}
	while (--i >= 0)
		write(1, &str[i], 1);
	write(1, "\n", 1);
}
