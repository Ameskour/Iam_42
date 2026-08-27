/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cle-then <cle-then@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/11 16:01:43 by cle-then          #+#    #+#             */
/*   Updated: 2026/08/13 11:14:33 by cle-then         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	char_to_exa(char c)
{
	int		i;
	char	current;

	i = c % 16;
	write(1, "\\", 1);
	if (c / 16 == 1)
		write(1, "1", 1);
	else
		write(1, "0", 1);
	if (i <= 9)
	{
		current = i + '0';
		write(1, &current, 1);
	}
	else
	{
		current = (i - 10) + 'a';
		write(1, &current, 1);
	}
}

void	ft_putstr_non_printable(char *str)
{
	if (str[0] == '\0')
		return ;
	else if (str[0] < ' ')
		char_to_exa(str[0]);
	else if (str[0] == 127)
		write(1, "\\7f", 3);
	else
		write(1, &str[0], 1);
	return (ft_putstr_non_printable(&str[1]));
}

/*
int main()
{
	char *str = "Hello \n World";

	ft_putstr_non_printable(str);
}
*/
