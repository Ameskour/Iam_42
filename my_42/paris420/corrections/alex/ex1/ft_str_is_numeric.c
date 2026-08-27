/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agarin <agarin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/10 10:47:30 by agarin            #+#    #+#             */
/*   Updated: 2026/08/10 15:31:33 by agarin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_numeric(char *str)
{
	char	v;
	int		i;

	i = 0;
	while (str[i])
	{
		v = str[i];
		if ('0' <= v && v <= '9')
			i++;
		else
			return (0);
	}
	return (1);
}

int main(void)
{
	char *str;

	str = "9483j";
	printf("%d", ft_str_is_numeric(str));
}