/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tail.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdomanta <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/25 12:44:07 by jdomanta          #+#    #+#             */
/*   Updated: 2019/07/25 12:44:08 by jdomanta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_tail.h"

int main(int argc, char **argv)
{
	int		buff_size;
	char	buffer[30];

	buff_size = 30;
	if (argc == 1)
		inactive(buffer, buff_size);
	else
		print_files(argc, argv, buffer, buff_size);
	return (0);
}

void	print_files(int argc, char **argv, char *buffer, int buff_size)
{
	int 	i;
	int 	fd;
	int 	ret;
	int		length;
	char	*file;

	i = 0;
	while (++i < argc)
	{
		fd = open(argv[i], O_RDONLY | S_IRUSR | S_IWUSR);
		if (fd == -1)
		{
			write(1, "tail: ", 7);
			print_str(argv[i]);
			write(1, ": No such file or directory\n", 28);
			return ;
		}
		length = 0;	
		while ((ret = read(fd, buffer, buff_size)))
			length += ret;
		ret = scan_file(&length, fd, &file);
		write(1, file, length);
	}
	close(fd);
}

int		scan_file(int *length, int fd, char** file)
{
	int i;
	int count;
	t_list *head;
	t_list *tmp;

	file = malloc(sizeof(char*));
	*file = malloc(sizeof(char) * *length);
	read(fd, file, *length);
	i = 0;
	count = 0;
	head = ft_create_elem(&i);
	while (*file[i] != EOF)
	{
		if (*file[i] == '\n')
		{
			count++;
			ft_list_push_back(&head, &i);
		}
		if (count > 10)
		{
			tmp = head;
			head = head->next;
			free(tmp);
		}
		length -= (int)head->val;
		i++;
	}
	i = (int)head->val;
	return (i);
}

void	print_str(char *str)
{
	while (*str != '\0')
	{
		write(1, str, 1);
		str++;
	}
}

void	inactive(char *buffer, int buff_size)
{
	int ret;
	while (ret)
	{
		ret = read(1, buffer, buff_size);
	}
}