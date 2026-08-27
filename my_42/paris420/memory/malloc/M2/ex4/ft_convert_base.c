/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iameskou <iameskou@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/20 13:39:56 by iameskou          #+#    #+#             */
/*   Updated: 2026/08/20 13:50:06 by iameskou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int		check_base(char *base);
int		ft_atoi_base(char *nbr, char *base_from);
char	*ft_putnbr_base(int nbr, char *base_to);

char	*ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	int		number;
	char	*result;

	if (!check_base(base_from) || !check_base(base_to))
		return (NULL);
	number = ft_atoi_base(nbr, base_from);
	result = ft_putnbr_base(number, base_to);
	return (result);
}

int	base_length(char *base)
{
	int	i;

	i = 0;
	while (base[i] != '\0')
		i++;
	return (i);
}

int	get_sign(char *nbr, int *i)
{
	int	sign;

	sign = 1;
	while (nbr[*i] == '+' || nbr[*i] == '-')
	{
		if (nbr[*i] == '-')
			sign = -sign;
		(*i)++;
	}
	return (sign);
}

void	fill_result(char *result, long number, char *base, int i)
{
	int	base_len;

	base_len = base_length(base);
	while (number > 0)
	{
		result[i] = base[number % base_len];
		number = number / base_len;
		i--;
	}
}

/*
int	main(void)
{
	char	*result;

	result = ft_convert_base("11001", "01", "0123456789");
	printf("11001 binary = %s decimal\n", result);
	free(result);
	result = ft_convert_base("25", "0123456789", "01");
	printf("25 decimal = %s binary\n", result);
	free(result);
	return (0);
}
*/
