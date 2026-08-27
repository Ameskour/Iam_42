/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmakongu <jmakongu@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/11 16:25:07 by jmakongu          #+#    #+#             */
/*   Updated: 2026/08/12 18:09:25 by jmakongu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_comb(void)
{
	char	s;
	char	d;
	char	u;

	s = '0';
	while (s <= '7')
	{
		d = s + 1;
		while (d <= '8')
		{
			u = d + 1;
			while (u <= '9')
			{
				ft_putchar(s);
				ft_putchar(d);
				ft_putchar(u);
				if (s != '7' || d != '8' || u != '9')
					write(1, ", ", 2);
				u++;
			}
			d++;
		}
		s++;
	}
}

int	main(void)
{
	ft_print_comb();
}