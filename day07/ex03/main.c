/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdomanta <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/17 15:55:18 by jdomanta          #+#    #+#             */
/*   Updated: 2019/07/17 16:20:37 by jdomanta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
char	*ft_concat_params(int argc, char **argv);

int	main(int argc, char **argv)
{
	char *str;
	str = ft_concat_params(argc, argv);
	printf("%s", str);
	return (0);
}
