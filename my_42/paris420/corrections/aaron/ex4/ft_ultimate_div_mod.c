/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: naaron <naaron@learner.42.tech>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/11 09:02:24 by naaron            #+#    #+#             */
/*   Updated: 2026/08/11 12:19:09 by naaron           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_div_mod(int *a, int *b)
{
	int	c;

	c = *a / *b;
	*b = *a % *b;
	*a = c;
}

int	main(void)
{
	int	f;
	int	g;

	f = 53;
	g = 5;
	ft_div_mod(&f, &g);
	printf(" le contenu a a vaut %d, et a b vaut %d", f, g);
}
