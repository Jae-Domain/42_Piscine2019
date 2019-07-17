/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdomanta <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/16 14:02:38 by jdomanta          #+#    #+#             */
/*   Updated: 2019/07/16 14:24:12 by jdomanta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);
void	print_str(char *str);

int		main(int argc, char **argv)
{
	int index;

	index = 1;
	while (argc-- > 1)
	{
		print_str(argv[index]);
		ft_putchar('\n');
		index++;
	}
	return (0);
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
