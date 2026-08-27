/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: noclemen <noclemen@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/06 11:07:47 by noclemen          #+#    #+#             */
/*   Updated: 2026/08/06 17:28:21 by iameskou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putnbr(int nb)
{
	int		i;
	char	reverse_nb[12];

	i = 0;
	if (nb == 0)
	{
		write(1, "0", 1);
		return ;
	}
	if (nb < 0)
	{
		write(1, "-", 1);
		nb = -nb;
	}
	while (nb != 0)
	{
		reverse_nb[i++] = nb % 10 + '0';
		nb = nb / 10;
	}
	while (i > 0)
	{
		i--;
		write(1, &reverse_nb[i], 1);
	}
}


int	main(void)
{
	ft_putnbr(1);
	write(1, "\n", 1);
	ft_putnbr(10);
	write(1, "\n", 1);
	ft_putnbr(-1);
	write(1, "\n", 1);
	ft_putnbr(0);
	write(1, "\n", 1);
	ft_putnbr(40);
	write(1, "\n", 1);
	ft_putnbr(468);
	write(1, "\n", 1);
	ft_putnbr(846);
	write(1, "\n", 1);
	ft_putnbr(9563);
	write(1, "\n", 1);
	return (0);
}

