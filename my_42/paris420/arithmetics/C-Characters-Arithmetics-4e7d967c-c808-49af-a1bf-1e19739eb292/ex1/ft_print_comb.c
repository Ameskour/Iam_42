/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iameskou <iameskou@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/06 21:01:23 by iameskou          #+#    #+#             */
/*   Updated: 2026/08/07 12:09:00 by iameskou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_comb(void)
{
	char	a;
	char	b;
	char	c;

	a = '0';
	while (a <= '7')
	{
		b = a + 1;
		while (b <= '8')
		{
			c = b + 1;
			while (c <= '9')
			{
				write(1, &a, 1);
				write(1, &b, 1);
				write(1, &c, 1);
				if (!(a == '7' && b == '8' && c == '9'))
					write(1, ", ", 2);
				c++;
			}
			b++;
		}
		a++;
	}
}
/*
int	main(void)
{
	ft_print_comb();
	write(1, "\n", 1);
	return (0);
}
*/

/*
This main function is only used for testing ft_print_comb.
It calls the function and displays all combinations of three digits.

The goal of ft_print_comb is to print all different combinations
of three digits in ascending order.

Algorithm:
- The first loop chooses the first digit (a) from 0 to 7.
- The second loop chooses the second digit (b) starting from a + 1,
  which guarantees that b is always bigger than a.
- The third loop chooses the third digit (c) starting from b + 1,
  which guarantees that c is always bigger than b.

This condition creates combinations where:
a < b < c

Example:
012 is allowed because 0 < 1 < 2.
210 is not printed because the order is not ascending.
122 is not printed because digits are repeated.

After printing each combination, the program adds ", "
except for the last combination 789.

The main function is commented because the 42 exercise requires
submitting only ft_print_comb.c without a main function.
*/
