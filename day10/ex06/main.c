/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdomanta <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/22 17:43:27 by jdomanta          #+#    #+#             */
/*   Updated: 2019/07/22 20:33:29 by jdomanta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "doop.h"

int		main(int argc, char **argv)
{
	int ans;

	ans = 0;
	if (argc != 4)
		return (1);
	if (argv[3][0] == '0' && (argv[2][0] == '/' || argv[2][0] == '%'))
	{
		if (argv[2][0] == '/')
			write(1, "Stop : division by zero\n", 24);
		else
			write(1, "Stop : modulo by zero\n", 22);
		return (0);
	}
	ans = calculate(ft_atoi(argv[1]), argv[2], ft_atoi(argv[3]));
	print_num(ans);
	return (0);
}
