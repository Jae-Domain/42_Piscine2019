/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_back.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdomanta <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/23 15:26:58 by jdomanta          #+#    #+#             */
/*   Updated: 2019/07/23 18:32:32 by jdomanta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_push_back(t_list **begin_list, void *data)
{
	t_list *tmp;
	t_list *traverse;

	tmp = malloc(sizeof(t_list));
	traverse = *begin_list;
	tmp->str = data;
	tmp->next = NULL;
	while (traverse->next != NULL)
		traverse = traverse->next;
	traverse->next = tmp;
}
