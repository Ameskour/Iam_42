/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_number.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmavoung <rmavoung@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/06 13:01:25 by rmavoung          #+#    #+#             */
/*   Updated: 2026/08/06 13:21:11 by rmavoung         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_numbers(void)
{
	int	nombre;

	nombre = '0';
	while (nombre <= '9')
	{
		write(1, &nombre, 1);
		nombre++;
	}
}

//int     main ()
//{
//    ft_print_numbers();
//}
