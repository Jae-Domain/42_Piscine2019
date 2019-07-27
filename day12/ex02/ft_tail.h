/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tail.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdomanta <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/25 12:46:14 by jdomanta          #+#    #+#             */
/*   Updated: 2019/07/25 12:46:15 by jdomanta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_TAIL_H
# define FT_TAIL_H
# include <unistd.h>
# include <fcntl.h>
# include <stdlib.h>
# include <stdio.h>

typedef struct s_list   t_list;
struct s_list {
    void    *val;
    t_list  *next;
};

void	ft_list_push_back(t_list **begin_list, void *data);
t_list	*ft_create_elem(void *data);
void	print_files(int argc, char **argv, char *buffer, int buff_size);
int 	scan_file(int *length, int fd, char **file);
void	print_str(char *str);
void	inactive(char *buffer, int buff_size);
#endif