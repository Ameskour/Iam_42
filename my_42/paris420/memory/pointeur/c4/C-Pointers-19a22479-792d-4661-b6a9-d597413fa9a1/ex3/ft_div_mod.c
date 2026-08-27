/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iameskou <iameskou@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/10 12:37:50 by iameskou          #+#    #+#             */
/*   Updated: 2026/08/10 12:37:52 by iameskou         ###   ########.fr       */
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

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}

// int	main(void)
// {
// 	int	div;
// 	int	mod;

// 	ft_div_mod(10,3 , &div, &mod);

// 	ft_putnbr(div);
// 	ft_putchar('\n');

// 	ft_putnbr(mod);
// 	ft_putchar('\n');

// 	return (0);
// }
