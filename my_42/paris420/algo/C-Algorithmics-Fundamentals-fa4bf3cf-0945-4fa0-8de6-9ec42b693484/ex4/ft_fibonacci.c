/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iameskou <iameskou@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/07 14:13:50 by iameskou          #+#    #+#             */
/*   Updated: 2026/08/07 14:14:14 by iameskou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_fibonacci(int index)
{
	if (index < 0)
		return (-1);
	if (index == 0)
		return (0);
	if (index == 1)
		return (1);
	return (ft_fibonacci(index - 1) + ft_fibonacci(index - 2));
}
/*
int	main(void)
{
	printf("%d\n", ft_fibonacci(0));
	printf("%d\n", ft_fibonacci(1));
	printf("%d\n", ft_fibonacci(5));
	printf("%d\n", ft_fibonacci(7));
	printf("%d\n", ft_fibonacci(-3));
	return (0);
}
*/
/*
ft_fibonacci:

- Returns the n-th Fibonacci number using recursion.
- Negative index returns -1.
- Index 0 returns 0 and index 1 returns 1.
- Each call adds the two previous Fibonacci values.
*/
