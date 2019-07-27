/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   functions.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdomanta <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/25 12:44:14 by jdomanta          #+#    #+#             */
/*   Updated: 2019/07/25 12:44:15 by jdomanta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_tail.h"

void	ft_list_push_back(t_list **begin_list, void *data)
{
	t_list *tmp;
	t_list *traverse;

	tmp = malloc(sizeof(t_list));
	traverse = *begin_list;
	tmp = ft_create_elem(data);
	while (traverse->next != NULL)
		traverse = traverse->next;
	traverse->next = tmp;
}

t_list	*ft_create_elem(void *data)
{
	t_list *x;

	x = malloc(sizeof(t_list));
	if (x)
	{
		x->val = data;
		x->next = 0;
	}
	return (x);
}