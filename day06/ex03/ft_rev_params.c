/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdomanta <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/16 14:35:00 by jdomanta          #+#    #+#             */
/*   Updated: 2019/07/16 14:38:06 by jdomanta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);
void	print_str(char *str);

int		main(int argc, char **argv)
{
	while (argc-- > 1)
	{
		print_str(argv[argc]);
		ft_putchar('\n');
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
