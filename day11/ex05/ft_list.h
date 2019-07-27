/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdomanta <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/23 15:27:07 by jdomanta          #+#    #+#             */
/*   Updated: 2019/07/23 15:27:10 by jdomanta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_LIST_H
# define FT_LIST_H
# include <stdlib.h>
# include <stdio.h>

typedef struct s_list	t_list;
struct	s_list{
	char			*str;
	t_list			*next;
};

t_list	*ft_create_elem(void *data);
#endif
