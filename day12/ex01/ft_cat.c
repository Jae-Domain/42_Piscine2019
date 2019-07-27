/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdomanta <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/24 20:57:32 by jdomanta          #+#    #+#             */
/*   Updated: 2019/07/24 22:45:49 by jdomanta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_cat.h"

int	main(int argc, char **argv)
{
	int		buff_size;
	char	buffer[30];

	buff_size = 30;
	if (argc == 1)
		ft_echo(buffer, buff_size);
	else
		ft_print_files(argc, argv, buffer, buff_size);
	return (0);
}
