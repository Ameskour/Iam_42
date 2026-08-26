/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iameskou <iameskou@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/26 12:00:00 by iameskou          #+#    #+#             */
/*   Updated: 2026/08/26 12:00:00 by iameskou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iameskou <iameskou@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/26 12:00:00 by iameskou          #+#    #+#             */
/*   Updated: 2026/08/26 12:00:00 by iameskou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_sort(int *tab, int length, int (*f)(int, int))
{
	int	i;
	int	ascending;
	int	descending;

	i = 0;
	ascending = 1;
	descending = 1;
	while (i < length - 1)
	{
		/* If current > next, it cannot be ascending */
		if (f(tab[i], tab[i + 1]) > 0)
			ascending = 0;

		/* If current < next, it cannot be descending */
		if (f(tab[i], tab[i + 1]) < 0)
			descending = 0;

		/* Move to the next pair */
		i++;
	}

	/* If it is ascending OR descending, it is sorted */
	if (ascending || descending)
		return (1);

	/* Otherwise, it is not sorted */
	return (0);
}
/*
#include <stdio.h>

int	compare(int a, int b)
{
	return (a - b);
}

int	main(void)
{
	int	tab1[] = {1, 2, 3, 4, 5};
	int	tab2[] = {5, 4, 3, 2, 1};
	int	tab3[] = {1, 3, 2, 4};
	int	tab4[] = {1, 1, 2, 2, 3};
	int	tab5[] = {5, 5, 5, 5};

	printf("tab1: %d\n", ft_is_sort(tab1, 5, &compare));
	printf("tab2: %d\n", ft_is_sort(tab2, 5, &compare));
	printf("tab3: %d\n", ft_is_sort(tab3, 4, &compare));
	printf("tab4: %d\n", ft_is_sort(tab4, 5, &compare));
	printf("tab5: %d\n", ft_is_sort(tab5, 4, &compare));

	return (0);
}
*/