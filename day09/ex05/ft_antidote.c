/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_antidote.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdomanta <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/19 15:12:55 by jdomanta          #+#    #+#             */
/*   Updated: 2019/07/19 15:56:38 by jdomanta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_ANTIDOTE_C
# define FT_ANTIDOTE_C
# define IS_MIDDLE(a, b, c) ((a >= b && a <= c) || (a <= b && a >= c))
#endif

int	ft_antidote(int i, int j, int k)
{
	if (IS_MIDDLE(i, j, k))
		return (i);
	else if (IS_MIDDLE(j, k, i))
		return (j);
	return (k);
}
