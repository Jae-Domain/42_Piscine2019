/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   doop.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdomanta <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/22 20:22:43 by jdomanta          #+#    #+#             */
/*   Updated: 2019/07/22 20:24:07 by jdomanta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOOP_H
# define DOOP_H
# include <unistd.h>

int		is_op(char *x);
int		calculate(int x, char *op, int y);
int		ft_atoi(char *x);
int		is_num(char *x);
void	print_num(int x);
int     do_add(int x, int y);
int     do_sub(int x, int y);
int     do_div(int x, int y);
int     do_mul(int x, int y);
int     do_mod(int x, int y);
#endif
