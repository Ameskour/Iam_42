/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iameskou <iameskou@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/10 12:32:40 by iameskou          #+#    #+#             */
/*   Updated: 2026/08/10 12:32:43 by iameskou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

// void	ft_putchar(char c)
// {
// 	write(1, &c, 1);
// }

// void	ft_putnbr(int nbr)
// {
// 	if (nbr >= 10)
// 		ft_putnbr(nbr / 10);
// 	ft_putchar((nbr % 10) + '0');
// }

void	ft_swap(int *a, int *b)
{
	int	temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

// int	main(void)
// {
// 	int	x;
// 	int	y;

// 	x = 10;
// 	y = 20;

// 	ft_putnbr(x);
// 	ft_putchar('\n');
// 	ft_putnbr(y);
// 	ft_putchar('\n');

// 	ft_swap(&x, &y);

// 	ft_putnbr(x);
// 	ft_putchar('\n');
// 	ft_putnbr(y);
// 	ft_putchar('\n');

// 	return (0);
// }
