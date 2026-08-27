/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iameskou <iameskou@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/06 19:57:50 by iameskou          #+#    #+#             */
/*   Updated: 2026/08/06 19:57:57 by iameskou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

/*
void	ft_putchar(char c);

int	main(void)
{
	ft_putchar('A');
	ft_putchar('\n');
	ft_putchar('A');
	ft_putchar('\n');
	ft_putchar('B');
	ft_putchar('\n');
	ft_putchar('*');
	return (0);

}
*/
