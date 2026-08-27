/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dadorelu <dadorelu@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/06 10:38:19 by dadorelu          #+#    #+#             */
/*   Updated: 2026/08/06 19:28:19 by iameskou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_print_comb(void)
{
	char	nbun;
	char	nbdeux;
	char	nbtrois;	

	nbun = '0';
	while (nbun <= '7' )
	{
		nbdeux = nbun + 1;
		while (nbdeux <= '8' )
		{
			nbtrois = nbdeux + 1 ;
			while (nbtrois <= '9')
			{
				write(1, &nbun, 1);
				write(1, &nbdeux, 1);
				write(1, &nbtrois, 1);
				if (nbun != '7')
					write(1, ", ", 2);
				nbtrois++;
			}
			nbdeux++;
		}
		nbun++;
	}
}
int main()
{
	ft_print_comb();
}
