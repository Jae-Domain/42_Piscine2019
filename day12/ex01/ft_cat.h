/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_cat.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdomanta <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/24 21:13:39 by jdomanta          #+#    #+#             */
/*   Updated: 2019/07/24 22:46:05 by jdomanta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_CAT_H
# define FT_CAT_H
# include <unistd.h>
# include <errno.h>
# include <fcntl.h>

void	print_str(char *str);
void	ft_echo(char *buffer, int buff_size);
void	print_error();
void	ft_print_files(int argc, char **argv, char *buffer, int buff_size);

#endif
