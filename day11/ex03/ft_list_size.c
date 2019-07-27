/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_size.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdomanta <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/23 19:01:36 by jdomanta          #+#    #+#             */
/*   Updated: 2019/07/23 19:10:41 by jdomanta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

int	ft_list_size(t_list *begin_list)
{
	int		count;
	t_list	*traverse;

	count = 0;
	traverse = begin_list;
	while (traverse != NULL)
	{
		traverse = traverse->next;
		count++;
	}
	return (count);
}
