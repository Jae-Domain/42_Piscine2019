/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_apply_suffix.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdomanta <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/26 15:00:19 by jdomanta          #+#    #+#             */
/*   Updated: 2019/07/26 15:24:59 by jdomanta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_btree.h"

void	btree_apply_infix(t_btree *root, void (*applyf)(void *))
{
	if (root && root->left)
		btree_apply_infix(root->left, applyf);
	if (root && root->right)
		btree_apply_infix(root->right, applyf);
	if (root)
		applyf(root->item);
}
