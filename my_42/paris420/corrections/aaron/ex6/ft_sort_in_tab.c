/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_in_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: naaron <naaron@learner.42.tech>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/11 10:37:05 by naaron            #+#    #+#             */
/*   Updated: 2026/08/11 13:48:55 by naaron           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_swap(int *a, int *b)
{
	int	c;

	c = *a;
	*a = *b;
	*b = c;
}

void	ft_sort_int_tab(int *tab, int size)
{
	int	k;

	k = 0;
	if (size > 1)
	{
		while (k < size - 1)
		{
			if (tab[k] > tab [k + 1])
			{
				ft_swap(&tab[k], &tab[k + 1]);
				k = 0;
			}
			else
			{
				k++;
			}
		}
	}
}

int	main(void)
{
	int	sizze;
	int	j[5];

	sizze = 5;
	j[0] = 4;
	j[1] = 2;
	j[2] = 8;
	j[3] = 31;
	j[4] = -6;
	ft_sort_int_tab(j, sizze);
	printf("%d %d %d %d %d", j[0], j[1], j[2], j[3], j[4]);
	return (0);
}
