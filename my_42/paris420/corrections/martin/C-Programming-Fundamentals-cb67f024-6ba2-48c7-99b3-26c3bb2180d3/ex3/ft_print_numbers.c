/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlesueur <mlesueur@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/06 12:12:16 by mlesueur          #+#    #+#             */
/*   Updated: 2026/08/06 13:43:09 by mlesueur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_numbers(void)
{
	char	numb;
	int		limit;

	limit = 10;
	numb = '0';
	while (limit < 0, limit--)
	{
		write(1, &numb, 1);
		numb++;
	}
}

int	main(void)
{
	ft_print_numbers();
	return (0);
}
