/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cle-then <cle-then@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/10 22:29:49 by cle-then          #+#    #+#             */
/*   Updated: 2026/08/10 22:51:48 by cle-then         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_lowercase(char *str)
{
	if (str[0] == '\0')
		return (1);
	else if (str[0] >= 'a' && str[0] <= 'z')
		return (ft_str_is_lowercase(&str[1]));
	else
		return (0);
}

/*
#include <stdio.h>

int	main(void)
{
	*str = "hfuihf";

	printf("%d", ft_str_is_lowercase(str));	
}
*/
