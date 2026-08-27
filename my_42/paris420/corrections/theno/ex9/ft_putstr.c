/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cle-then <cle-then@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/11 15:35:35 by cle-then          #+#    #+#             */
/*   Updated: 2026/08/11 17:08:29 by cle-then         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
	if (str[0] == '\0')
		return ;
	else
	{
		write(1, &str[0], 1);
		return (ft_putstr(&str[1]));
	}
}

/*
int main()
{
	char *str = "Hello World";

	ft_putstr(str);
}
*/
