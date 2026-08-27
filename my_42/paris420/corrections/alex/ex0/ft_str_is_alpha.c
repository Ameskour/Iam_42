/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agarin <agarin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/10 09:49:13 by agarin            #+#    #+#             */
/*   Updated: 2026/08/10 16:43:54 by agarin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_alpha(char *str)
{
	char	v;
	int		i;

	i = 0;
	while (str[i])
	{
		v = str[i];
		if (('A' <= v && v <= 'Z') || ('a' <= v && v <= 'z'))
			i++;
		else
			return (0);
	}
	return (1);
}

int main(void)
{
	char *str;

	str = "hkvfdbh^vufNDGED";
	printf("%d", ft_str_is_alpha(str));
}