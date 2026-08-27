/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iameskou <iameskou@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/20 14:15:56 by iameskou          #+#    #+#             */
/*   Updated: 2026/08/20 14:15:57 by iameskou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	size;
	int	i;

	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	size = max - min;
	*range = malloc(size * sizeof(int));
	if (*range == NULL)
		return (-1);
	i = 0;
	while (i < size)
	{
		(*range)[i] = min + i;
		i++;
	}
	return (size);
}

// int	main(void)
// {
// 	int	*numbers;
// 	int	size;
// 	int	i;

// 	size = ft_ultimate_range(&numbers, 3, 8);
// 	i = 0;
// 	while (i < size)
// 	{
// 		printf("%d ", numbers[i]);
// 		i++;
// 	}
// 	printf("\n");
// 	free(numbers);
// 	return (0);
// }
