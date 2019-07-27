/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_apply_infix.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdomanta <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/26 13:45:39 by jdomanta          #+#    #+#             */
/*   Updated: 2019/07/26 13:45:40 by jdomanta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_btree.h"

void	btree_apply_infix(t_btree *root, void (*applyf)(void *))
{
	if (root && root->left)
		btree_apply_infix(root->left, applyf);
	if (root)
		applyf(root->item);
	if (root && root->right)
		btree_apply_infix(root->right, applyf);
}
