/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlesueur <mlesueur@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/06 13:47:38 by mlesueur          #+#    #+#             */
/*   Updated: 2026/08/06 15:29:57 by mlesueur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_is_negative(int c)
{
	if (c >= 0)
	{
		write(1, "P", 1);
	}
	else
		write(1, "N", 1);
}

/*
int	main(void)
{
	ft_is_negative(64);
	return (0);
}

*/
