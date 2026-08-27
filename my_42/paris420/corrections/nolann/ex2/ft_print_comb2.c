/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: noclemen <noclemen@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/06 15:25:43 by noclemen          #+#    #+#             */
/*   Updated: 2026/08/06 17:29:56 by iameskou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_comb2(void)
{
	char	ab;
	char	cd;	

	ab = 0;
	while (ab <= 98)
	{
		cd = ab + 1;
		while (cd <= 99)
		{
			ft_putchar((ab / 10) + '0');
			ft_putchar((ab % 10) + '0');
			ft_putchar(' ');
			ft_putchar((cd / 10) + '0');
			ft_putchar((cd % 10) + '0');
			if (!(ab == 98 && cd == 99))
			{
				ft_putchar(',');
				ft_putchar(' ');
			}
			cd++;
		}
		ab++;
	}
}

int	main(void)
{
	ft_print_comb2();
	return (0);
}

