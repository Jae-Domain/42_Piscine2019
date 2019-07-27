/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   functions.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdomanta <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/24 22:25:35 by jdomanta          #+#    #+#             */
/*   Updated: 2019/07/25 21:59:05 by jdomanta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_cat.h"

void	ft_print_files(int argc, char **argv, char *buffer, int buff_size)
{
	int i;
	int fd;
	int ret;

	errno = 0;
	i = 0;
	while (++i < argc)
	{
		fd = open(argv[i], O_RDONLY | S_IRUSR | S_IWUSR);
		if (fd == -1)
		{
			print_error();
			return ;
		}
		while ((ret = read(fd, buffer, buff_size)))
		{
			if (ret == -1)
				return (print_error());
			buffer[ret] = '\0';
			if (write(1, buffer, ret) == -1)
				return (print_error());
		}
	}
}

void	print_error(void)
{
	write(1, "cat", 3);
	if (errno == 1)
		write(1, ": Operation not permitted\n", 26);
	else if (errno == 2)
		write(1, ": No such file or directory\n", 28);
	else if (errno == 3)
		write(1, ": No such process\n", 18);
	else if (errno == 4)
		write(1, ": Interrupted system call\n", 26);
	else if (errno == 5)
		write(1, ": I/O error\n", 12);
	else if (errno == 7)
		write(1, ": Argument list too long\n", 25);
	else if (errno == 8)
		write(1, ": Exec format error\n", 20);
	else if (errno == 9)
		write(1, ": Bad file number\n", 18);
	else if (errno == 10)
		write(1, ": No child processes\n", 21);
	else if (errno == 12)
		write(1, ": Out of memory\n", 16);
	else if (errno == 13)
		write(1, ": Permission denied\n", 20);
	else
		write(1, ": Try again\n", 12);
}

void	print_str(char *str)
{
	while (*str != '\0')
	{
		write(1, str, 1);
		str++;
	}
}

void	ft_echo(char *buffer, int buff_size)
{
	int ret;

	while ((ret = read(1, buffer, buff_size)))
		write(1, buffer, ret);
}
