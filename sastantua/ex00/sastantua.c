/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sastantua.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdomanta <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/14 12:06:25 by jdomanta          #+#    #+#             */
/*   Updated: 2019/07/14 21:51:10 by jdomanta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);
void	print_row(int size);
void	print_spaces(int space, int length);
int		calc_space(int space);
void	print_door(int length, int size);

void	sastantua(int size)
{
	int space;	
	int row;
	int length;
	int tier;

	if (size < 1)
		return ;
	tier = 1;
	length = 3;
	space = calc_space(size);
	while(tier <= size)
	{
		row = tier + 2;
		while(row-- > 0)
		{
			print_spaces(space, length);
			if (size % 2 != 0 && tier == size && row < tier)
				print_door(length, size);
			else if (tier == size && row < tier - 1)
				print_door(length, size - 1);
			else
				print_row(length);
			length += 2;
		}
		if (++tier % 2 == 0)
			length += tier + 4;
		else
			length += tier + 3;	
	}
}

void	print_door(int length, int size)
{
	int door;
	int l;

	l  = length - 2;
	door = (length / 2) - size / 2;
	ft_putchar('/');
	while(l-- > 0)
	{
		if (l == door)
			while (size-- > 0)
				ft_putchar('|');
		else
			ft_putchar('*');
	}
	ft_putchar('\\');
	ft_putchar('\n');
}

int		calc_space(int size)
{
	int space;
	int tier;
	int row;
	int count;

	tier = 1;
	space = 3;
	count = size;
	while (count-- > 0)
	{
		row = tier + 2;
		while (row-- > 0)
			space += 2;
		tier++;
		if (tier % 2 == 0)
			space += tier +  4;
		else
			space += tier + 3;
	}
	if (size % 4 == 0)
		return (space - 4 - tier);
	return (space - 6 - tier);
}
void	print_row(int size)
{
	size -= 2;
	ft_putchar('/');
	while(size-- > 0)
	{
		ft_putchar('*');
	}
	ft_putchar('\\');
	ft_putchar('\n');
}

void	print_spaces(int space, int length)
{
	space /= 2;
	space -= length / 2;
	while (space-- > 0)
	{
		ft_putchar(' ');
	}
}
