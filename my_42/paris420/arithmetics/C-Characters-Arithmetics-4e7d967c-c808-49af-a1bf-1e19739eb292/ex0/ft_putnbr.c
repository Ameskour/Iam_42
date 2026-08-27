/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iameskou <iameskou@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/07 11:54:16 by iameskou          #+#    #+#             */
/*   Updated: 2026/08/07 11:58:03 by iameskou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	if (nb == -2147483648)
	{
		write(1, "-2147483648", 11);
		return ;
	}
	if (nb < 0)
	{
		ft_putchar('-');
		nb = -nb;
	}
	if (nb >= 10)
		ft_putnbr(nb / 10);
	ft_putchar((nb % 10) + '0');
}
/*
int	main(void)
{
	ft_putnbr(42);
	write(1, "\n", 1);

	ft_putnbr(-42);
	write(1, "\n", 1);

	ft_putnbr(0);
	write(1, "\n", 1);

	ft_putnbr(2147483647);
	write(1, "\n", 1);

	ft_putnbr(-2147483648);
	write(1, "\n", 1);

	return (0);
}
*/
/*
This main function is used only to test the ft_putnbr function.

It tests different types of integer values:
- 42: checks printing a normal positive number.
- -42: checks handling of negative numbers and the '-' sign.
- 0: checks the special case of zero.
- 2147483647: checks the biggest value an int can store.
- -2147483648: checks the smallest value an int can store.

The main function is commented because the 42 exercise requires
submitting only the ft_putnbr.c file, without a main function.

For local testing, uncomment this main or compile with a separate
main.c file.
*/
