/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iameskou <iameskou@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/07 13:45:48 by iameskou          #+#    #+#             */
/*   Updated: 2026/08/07 13:45:50 by iameskou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_iterative_factorial(int nb)
{
	int	result;
	int	i;

	if (nb < 0)
		return (0);
	result = 1;
	i = 1;
	while (i <= nb)
	{
		result = result * i;
		i++;
	}
	return (result);
}
/*
int	main(void)
{
	printf("%d\n", ft_iterative_factorial(5));
	printf("%d\n", ft_iterative_factorial(0));
	printf("%d\n", ft_iterative_factorial(-3));
	return (0);
}*/
/*
ft_iterative_factorial:

- Calculates the factorial of a number using a while loop.
- Negative numbers are invalid, so return 0.
- Start result at 1 because multiplication starts from 1.
- The loop multiplies result by each number from 1 to nb.
- 0! = 1 because the loop does not execute.
- Return the final factorial value.
*/
