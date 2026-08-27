/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iameskou <iameskou@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/10 12:53:42 by iameskou          #+#    #+#             */
/*   Updated: 2026/08/10 12:53:45 by iameskou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
// #include <stdio.h>
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
void	ft_ultimate_div_mod(int *a, int *b)
{
	int	div;
	int	mod;

	div = *a / *b;
	mod = *a % *b;
	*a = div;
	*b = mod;
}
// int	main(void)
// {
// 	int	a;
// 	int	b;
// 	a = 10;
// 	b = 3;
// 	ft_putnbr(a);
// 	ft_putchar('\n');
// 	ft_putnbr(b);
// 	ft_putchar('\n');
//     ft_putchar('\n');
// 	ft_ultimate_div_mod(&a, &b);
// 	ft_putnbr(a);
// 	ft_putchar('\n');
// 	ft_putnbr(b);
// 	ft_putchar('\n');
// 	return (0);
// }
