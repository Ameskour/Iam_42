/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ft.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iameskou <iameskou@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/10 11:57:23 by iameskou          #+#    #+#             */
/*   Updated: 2026/08/10 11:59:02 by iameskou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
/*
void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nbr){
    if (nbr>=10)
		ft_putnbr(nbr/10);
	ft_putchar((nbr%10)+'0');
}
*/
void	ft_ft(int *nbr)
{
	*nbr = 42;
}
/*
int	main(void){
	int a ;
	a = 10;
	ft_putnbr(a);
	ft_putchar('\n');
	ft_ft(&a);
	ft_putnbr(a);
	ft_putchar('\n');
	return 0;
}
*/