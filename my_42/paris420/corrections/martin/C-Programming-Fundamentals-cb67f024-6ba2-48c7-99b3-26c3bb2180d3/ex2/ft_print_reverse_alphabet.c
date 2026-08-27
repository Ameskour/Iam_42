/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlesueur <mlesueur@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/06 12:01:59 by mlesueur          #+#    #+#             */
/*   Updated: 2026/08/06 12:09:01 by mlesueur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_reverse_alphabet(void)
{
	char	lettre;
	int		lon;

	lon = 26;
	lettre = 'z';
	while (lon > 0, lon--)
	{
		write(1, &lettre, 1);
		lettre--;
	}
}

int	main(void)
{
	ft_print_reverse_alphabet();
	return (0);
}
