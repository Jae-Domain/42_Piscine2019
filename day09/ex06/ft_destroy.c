/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_destroy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdomanta <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/19 16:05:57 by jdomanta          #+#    #+#             */
/*   Updated: 2019/07/19 16:15:27 by jdomanta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_DESTROY_C
# define FT_DESTROY_C
# include "ft_ultimator.h"
#endif

void	ft_destroy(char ***factory)
{
	free(***factory);
	free(**factory);
	free(*factory);
	free(factory);
}
