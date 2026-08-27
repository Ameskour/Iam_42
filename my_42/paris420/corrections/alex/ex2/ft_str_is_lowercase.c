/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agarin <agarin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/10 11:02:05 by agarin            #+#    #+#             */
/*   Updated: 2026/08/10 11:08:38 by agarin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_lowercase(char *str)
{
	char	v;
	int		i;

	i = 0;
	while (str[i])
	{
		v = str[i];
		if ('a' <= v && v <= 'z')
			i++;
		else
			return (0);
	}
	return (1);
}

int	main(void)
{
	char *str;

	str = "hkvfdbh^vufNDGED";
	printf("%d", ft_str_is_lowercase(str));
}