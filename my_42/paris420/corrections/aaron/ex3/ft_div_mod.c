/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: naaron <naaron@learner.42.tech>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/11 08:21:41 by naaron            #+#    #+#             */
/*   Updated: 2026/08/11 12:17:12 by naaron           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	int	c;
	int	d;

	c = a / b;
	d = a % b;
	*div = c;
	*mod = d;
}

int	main(void)
{
	int	f;
	int	g;
	int	q;
	int	r;

	f = 25;
	g = 5;
	ft_div_mod(f, g, &q, &r);
	printf(" q vaut %d, et r vaut %d", q, r);
}