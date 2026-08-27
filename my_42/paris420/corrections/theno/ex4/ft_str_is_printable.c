/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cle-then <cle-then@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/11 13:10:37 by cle-then          #+#    #+#             */
/*   Updated: 2026/08/11 13:13:43 by cle-then         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_printable(char *str)
{
	if (str[0] == '\0')
		return (1);
	else if (str[0] >= ' ' && str[0] <= '~')
		return (ft_str_is_printable(&str[1]));
	else
		return (0);
}
