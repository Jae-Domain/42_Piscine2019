/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdomanta <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/16 14:35:00 by jdomanta          #+#    #+#             */
/*   Updated: 2019/07/16 19:13:24 by jdomanta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);
void	print_str(char *str);
char	**sort_array(char **str, int size);
void	swap_str(char **s1, char **s2);
int		string_cmp(char *s1, char *s2);

int		main(int argc, char **argv)
{
	char **c;

	c = sort_array(argv, argc);
	while (--argc > 0)
	{
		print_str(c[argc]);
		ft_putchar('\n');
	}
	return (0);
}

char	**sort_array(char **str, int size)
{
	int i;
	int i2;
	int c;

	c = size;
	while (--c > 0)
	{
		i = size;
		while (--i > 1)
		{
			i2 = 0;
			while (i >= 2 && str[i][i2] != '\0')
			{
				if (string_cmp(str[i], str[i - 1]) > 0)
				{
					swap_str(&str[i], &str[i - 1]);
					i--;
					i2 = 0;
				}
				i2++;
			}
		}
	}
	return (str);
}

int		string_cmp(char *s1, char *s2)
{
	int index;

	index = 0;
	while (s1[index] != '\0' || s2[index] != '\0')
	{
		if (s1[index] == s2[index])
			index++;
		else
			return (s1[index] - s2[index]);
	}
	return (0);
}

void	swap_str(char **s1, char **s2)
{
	char *tmp;

	tmp = *s1;
	*s1 = *s2;
	*s2 = tmp;
}

void	print_str(char *str)
{
	int index;

	index = 0;
	while (str[index] != '\0')
	{
		ft_putchar(str[index]);
		index++;
	}
}
