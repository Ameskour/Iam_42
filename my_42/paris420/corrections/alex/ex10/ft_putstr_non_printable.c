/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agarin <agarin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/10 14:51:31 by agarin            #+#    #+#             */
/*   Updated: 2026/08/10 16:02:56 by agarin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	write_hexa(char c)
{
	int	a;
	int	b;

	a = c / 16;
	b = c % 16;
	write(1, "\\", 1);
	if (a < 10)
		write(1, ("0" + a), 1);
	else
		write(1, ("a" + a - 10), 1);
	if (b < 10)
		write(1, ("0" + b), 1);
	else
		write(1, ("a" + b - 10), 1);
}

void	ft_putstr_non_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (' ' <= str[i] && str[i] != 127)
			write(1, &str[i], 1);
		else
			write_hexa(str[i]);
		i++;
	}
}

int	main(void)
{
	char	str[] = "Hello\nHow are you ?";
	ft_putstr_non_printable(str);
}