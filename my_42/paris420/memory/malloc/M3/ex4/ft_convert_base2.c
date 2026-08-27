/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base2.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iameskou <iameskou@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/20 13:28:20 by iameskou          #+#    #+#             */
/*   Updated: 2026/08/20 13:28:24 by iameskou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>
#include <stdlib.h>

int		base_length(char *base);
int		get_sign(char *nbr, int *i);
void	fill_result(char *result, long number, char *base, int i);

int	find_char(char c, char *base)
{
	int	i;

	i = 0;
	while (base[i] != '\0')
	{
		if (base[i] == c)
			return (i);
		i++;
	}
	return (-1);
}

int	check_base(char *base)
{
	int	i;
	int	j;

	i = 0;
	while (base[i] != '\0')
		i++;
	if (i < 2)
		return (0);
	i = 0;
	while (base[i] != '\0')
	{
		if (base[i] == '+' || base[i] == '-')
			return (0);
		if (base[i] == ' ' || (base[i] >= 9 && base[i] <= 13))
			return (0);
		j = i + 1;
		while (base[j] != '\0')
		{
			if (base[i] == base[j])
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

int	ft_atoi_base(char *nbr, char *base_from)
{
	int	result;
	int	digit;
	int	sign;
	int	i;
	int	base_len;

	result = 0;
	sign = 1;
	i = 0;
	base_len = base_length(base_from);
	while (nbr[i] == ' ' || (nbr[i] >= 9 && nbr[i] <= 13))
		i++;
	sign = get_sign(nbr, &i);
	while (nbr[i] != '\0')
	{
		digit = find_char(nbr[i], base_from);
		if (digit == -1)
			break ;
		result = result * base_len + digit;
		i++;
	}
	return (result * sign);
}

int	count_digits(long number, int base_len)
{
	int	count;

	count = 0;
	if (number == 0)
		return (1);
	while (number > 0)
	{
		number = number / base_len;
		count++;
	}
	return (count);
}

char	*ft_putnbr_base(int nbr, char *base_to)
{
	char	*result;
	long	number;
	int		base_len;
	int		len;
	int		i;

	base_len = base_length(base_to);
	number = nbr;
	if (number < 0)
		number = -number;
	len = count_digits(number, base_len);
	if (nbr < 0)
		len++;
	result = malloc(len + 1);
	if (result == NULL)
		return (NULL);
	result[len] = '\0';
	i = len - 1;
	fill_result(result, number, base_to, i);
	if (nbr == 0)
		result[0] = base_to[0];
	if (nbr < 0)
		result[0] = '-';
	return (result);
}
/*
**find_char()
**→ character → digit
**
**check_base()
**→ check if base is valid
**
**ft_atoi_base()
**→ old base → integer
**
**count_digits()
**→ count how much memory we need
**
**ft_putnbr_base()
**→ integer → new base
**
**ft_convert_base()
**→ controls everything
**
**
** LOGIC OF THE PROGRAM
**
** Example:
**
** ft_convert_base("11001", "01", "0123456789")
**
** Step 1:
** Check if "01" and "0123456789" are valid bases.
**
** Step 2:
** Read "11001" using base "01".
**
** '1' = 1
** '1' = 1
** '0' = 0
** '0' = 0
** '1' = 1
**
** The number is:
**
** 0 * 2 + 1 = 1
** 1 * 2 + 1 = 3
** 3 * 2 + 0 = 6
** 6 * 2 + 0 = 12
** 12 * 2 + 1 = 25
**
** So "11001" = 25.
**
** Step 3:
** Convert 25 to the new base "0123456789".
**
** 25 % 10 = 5
** 25 / 10 = 2
** 2 % 10 = 2
** 2 / 10 = 0
**
** We get the digits from right to left:
**
** 5 then 2
**
** So the final result is:
**
** "25"
**
** In short:
**
** input number
**      ↓
** check bases
**      ↓
** base_from → integer
**      ↓
** integer → base_to
**      ↓
** result string
*/
