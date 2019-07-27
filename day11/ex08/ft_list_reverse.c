/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_reverse.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdomanta <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/24 19:19:25 by jdomanta          #+#    #+#             */
/*   Updated: 2019/07/24 20:09:39 by jdomanta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_reverse(t_list **begin_list)
{
	t_list *curr;
	t_list *n;
	t_list *p;

	p = NULL;
	curr = *begin_list;
	n = NULL;
	while (curr != NULL)
	{
		n = curr->next;
		curr->next = p;
		p = curr;
		curr = n;
	}
	*begin_list = p;
}
