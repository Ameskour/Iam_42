/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iameskou <iameskou@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/12 18:43:41 by iameskou          #+#    #+#             */
/*   Updated: 2026/08/12 18:43:42 by iameskou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
int	ft_str_is_numeric(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (!(str[i] >= '0' && str[i] <= '9'))
			return (0);
		i++;
	}
	return (1);
}
// int	main(void)
// {
// 	printf("%d\n", ft_str_is_numeric("12345"));
// 	printf("%d\n", ft_str_is_numeric("123abc"));
// 	printf("%d\n", ft_str_is_numeric("Hello"));
// 	printf("%d\n", ft_str_is_numeric(""));
// 	printf("%d\n", ft_str_is_numeric("42"));
// 	return (0);
// }
