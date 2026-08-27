/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlesueur <mlesueur@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/06 11:19:35 by mlesueur          #+#    #+#             */
/*   Updated: 2026/08/06 12:00:10 by mlesueur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_alphabet(void)
{
	int		lon;
	char	alphabet;

	lon = 26;
	alphabet = 'a';
	while (lon > 0, lon--)
	{
		write(1, &alphabet, 1);
		alphabet++;
	}
}

/*
int	main(void)
{
	ft_print_alphabet();
	return (0);
}
*/
