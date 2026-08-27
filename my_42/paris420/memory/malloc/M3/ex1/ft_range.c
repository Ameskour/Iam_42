/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iameskou <iameskou@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/20 14:13:35 by iameskou          #+#    #+#             */
/*   Updated: 2026/08/20 14:13:39 by iameskou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*numbers;
	int	size;
	int	i;

	if (min >= max)
		return (NULL);
	size = max - min;
	numbers = malloc(size * sizeof(int));
	if (numbers == NULL)
		return (NULL);
	i = 0;
	while (i < size)
	{
		numbers[i] = min + i;
		i++;
	}
	return (numbers);
}
/*
int	main(void)
{
	int	*result;
	int	i;

	result = ft_range(3, 8);
	i = 0;
	while (i < 5)
	{
		printf("%d ", result[i]);
		i++;
	}
	printf("\n");
	free(result);
	return (0);
}
	*/
