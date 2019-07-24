/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rot42.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdomanta <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/18 23:31:39 by jdomanta          #+#    #+#             */
/*   Updated: 2019/07/19 15:09:33 by jdomanta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	rotate_upper(char **str);
void	rotate_lower(char **str);

char	*ft_rot42(char *str)
{
	while (*str != '\0')
	{
		if (*str >= 'A' && *str <= 'Z')
			rotate_upper(&str);
		else if (*str >= 'a' && *str <= 'z')
			rotate_lower(&str);
		str++;
	}
	return (str);
}

void	rotate_lower(char **str)
{
	**str += 16;
	if (**str > 'z')
		**str -= ('z' - 'a');
}

void	rotate_upper(char **str)
{
	**str += 16;
	if (**str > 'Z')
		**str -= ('Z' - 'A');
}
