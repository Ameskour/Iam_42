/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlatrech <rlatrech@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/11 12:29:30 by rlatrech          #+#    #+#             */
/*   Updated: 2026/08/12 11:13:24 by rlatrech         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_hexa(char str)
{
	int		div;
	int		mod;
	char	*ascii;

	ascii = "0123456789abcdef";
	div = (str / 16);
	mod = (str % 16);
	write(1, &ascii[div], 1);
	write(1, &ascii[mod], 1);
}

void	ft_putstr_non_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str [i] < 32 || str[i] > 126)
		{
			write(1, "\\", 1);
			ft_hexa(str[i]);
		}
		else
			write(1, &str[i], 1);
		i++;
	}
}
