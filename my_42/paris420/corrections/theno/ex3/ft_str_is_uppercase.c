/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cle-then <cle-then@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/10 22:54:38 by cle-then          #+#    #+#             */
/*   Updated: 2026/08/11 17:30:21 by cle-then         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_uppercase(char *str)
{
	if (str[0] == '\0')
		return (1);
	else if (str[0] >= 'A' && str [0] <= 'Z')
		return (ft_str_is_uppercase(&str[1]));
	else
		return (0);
}
