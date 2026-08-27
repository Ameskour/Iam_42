/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agarin <agarin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/10 11:12:22 by agarin            #+#    #+#             */
/*   Updated: 2026/08/10 11:41:26 by agarin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

int	ft_str_is_uppercase(char *str)
{
	char	v;
	int		i;

	i = 0;
	while (str[i])
	{
		v = str[i];
		if ('A' <= v && v <= 'Z')
			i++;
		else
			return (0);
	}
	return (1);
}

/*int	main(void)
{
	char *str;

	str = "hkvfdbh^vufNDGED";
	printf("%d", ft_str_is_uppercase(str));
}*/