/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_params.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdomanta <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/23 19:32:51 by jdomanta          #+#    #+#             */
/*   Updated: 2019/07/23 22:09:00 by jdomanta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

t_list	*ft_list_push_params(int ac, char **av)
{
	t_list	*head;
	t_list	*tmp;
	int		i;

	if (ac > 1)
	{
		head = ft_create_elem(av[1]);
		i = 1;
		while (++i < ac)
		{
			tmp = ft_create_elem(av[i]);
			tmp->next = head;
			head = tmp;
		}
	}
	else
		return (NULL);
	return (head);
}
