/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_foreach.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iameskou <iameskou@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/26 12:00:00 by iameskou          #+#    #+#             */
/*   Updated: 2026/08/26 12:42:57 by iameskou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

void	ft_foreach(int *tab, int length, void (*f)(int))
{
	int	i;

	i = 0;
	while (i < length)
	{
		f(tab[i]);
		i++;
	}
}
/*
void	print_number(int n)
{
	printf("%d ", n);
}

int	main(void)
{
	int	tab[] = {10, 20, 30, 40, 50};

	ft_foreach(tab, 5, &print_number);
	printf("\n");
	return (0);
}*/
