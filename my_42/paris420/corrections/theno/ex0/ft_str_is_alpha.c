/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cle-then <cle-then@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/10 18:44:10 by cle-then          #+#    #+#             */
/*   Updated: 2026/08/11 17:09:52 by cle-then         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_alpha(char *str)
{
	if (str[0] == '\0')
		return (1);
	else if (!((str[0] <= 'z' && str[0] >= 'a')
			|| (str[0] >= 'A' && str[0] <= 'Z')))
		return (0);
	else
		return (ft_str_is_alpha(&str[1]));
}

#include <stdio.h>

int	main(void)
{
	char *str = "Bpcz";

	printf("%d", ft_str_is_alpha(str));
}

