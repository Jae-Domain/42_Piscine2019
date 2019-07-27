/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display_file.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdomanta <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/24 13:09:32 by jdomanta          #+#    #+#             */
/*   Updated: 2019/07/24 13:09:34 by jdomanta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_display_file.h"

int	main(int argc, char **argv)
{
	int		fd;
	int		ret;
	char	file[12];

	if (argc < 2)
		write(1, "File name missing.\n", 19);
	else if (argc > 2)
		write(1, "Too many arguments.\n", 20);
	else
	{
		fd = open(argv[1], O_RDONLY | S_IRUSR | S_IWUSR);
		if (fd == -1)
			return (1);
		while ((ret = read(fd, file, 10)))
		{
			file[ret] = '\0';
			write(1, file, ret);
		}
	}
	return (0);
}
