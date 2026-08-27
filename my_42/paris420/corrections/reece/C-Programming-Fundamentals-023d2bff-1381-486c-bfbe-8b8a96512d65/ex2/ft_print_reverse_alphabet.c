/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmavoung <rmavoung@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/06 12:38:40 by rmavoung          #+#    #+#             */
/*   Updated: 2026/08/06 12:58:01 by rmavoung         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_reverse_alphabet(void)
{
	char	lettrerev;

	lettrerev = 'z';
	while (lettrerev >= 'a')
	{
		write(1, &lettrerev, 1);
		lettrerev--;
	}
}

//int	main (void)
//{	
//	ft_print_reverse_alphabet ();
//}
