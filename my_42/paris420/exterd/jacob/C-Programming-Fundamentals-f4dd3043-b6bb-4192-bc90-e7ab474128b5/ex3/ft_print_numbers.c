/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cljacob <cljacob@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/05 11:47:38 by cljacob           #+#    #+#             */
/*   Updated: 2026/08/05 12:02:30 by cljacob          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_numbers(void)
{
	char	chiffre;

	chiffre = 48;
	while (chiffre <= 57)
	{
		write(1, &chiffre, 1);
		chiffre++;
	}
}
