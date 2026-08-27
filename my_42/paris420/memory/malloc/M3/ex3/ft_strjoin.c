/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iameskou <iameskou@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/20 14:20:34 by iameskou          #+#    #+#             */
/*   Updated: 2026/08/22 12:00:43 by iameskou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	str_len(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

int	total_len(int size, char **strs, char *sep)
{
	int	i;
	int	len;

	len = 0;
	i = 0;
	while (i < size)
	{
		len += str_len(strs[i]);
		i++;
	}
	i = 0;
	while (i < size - 1)
	{
		len += str_len(sep);
		i++;
	}
	return (len);
}

void	copy_str(char *result, char *str, int *pos)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		result[*pos] = str[i];
		(*pos)++;
		i++;
	}
}

char	*empty(void)
{
	char	*res;

	res = malloc(1);
	if (res == NULL)
		return (NULL);
	res[0] = '\0';
	return (res);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*result;
	int		i;
	int		pos;

	if (strs == NULL || sep == NULL)
		return (NULL);
	if (size == 0)
		return (empty());
	result = malloc(total_len(size, strs, sep) + 1);
	if (result == NULL)
		return (NULL);
	pos = 0;
	i = 0;
	while (i < size)
	{
		copy_str(result, strs[i], &pos);
		if (i < size - 1)
			copy_str(result, sep, &pos);
		i++;
	}
	result[pos] = '\0';
	return (result);
}
/*
int	main(void)
{
	char	*strs[] = {"Hello", "World", "42"};
	char	*result;

	result = ft_strjoin(3, strs, " - ");
	if (result == NULL)
		return (1);

	printf("Result: %s\n", result);

	free(result);
	return (0);
}
	*/
