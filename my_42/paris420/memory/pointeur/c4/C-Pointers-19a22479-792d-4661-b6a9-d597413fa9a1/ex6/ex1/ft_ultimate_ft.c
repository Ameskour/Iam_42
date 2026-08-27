/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_ft.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iameskou <iameskou@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/10 12:14:36 by iameskou          #+#    #+#             */
/*   Updated: 2026/08/10 12:14:43 by iameskou         ###   ########.fr       */
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
/*
 * ft_ultimate_ft:
 * Receives a pointer with 9 levels of pointers.
 * Each '*' goes one level deeper until reaching the int.
 * Then we change the int value to 42.
 */
void	ft_ft(int *********nbr)
{
	*********nbr = 42;
}

// int	main(void)
// {
// 	int			a;
// 	int			*p1;
// 	int			**p2;
// 	int			***p3;
// 	int			****p4;
// 	int			*****p5;
// 	int			******p6;
// 	int			*******p7;
// 	int			********p8;
// 	int			*********p9;

// 	a = 10;

// 	p1 = &a;
// 	p2 = &p1;
// 	p3 = &p2;
// 	p4 = &p3;
// 	p5 = &p4;
// 	p6 = &p5;
// 	p7 = &p6;
// 	p8 = &p7;
// 	p9 = &p8;

// 	ft_putnbr(a);
// 	ft_putchar('\n');

// 	ft_ft(p9);

// 	ft_putnbr(a);
// 	ft_putchar('\n');

// 	return (0);
// }
