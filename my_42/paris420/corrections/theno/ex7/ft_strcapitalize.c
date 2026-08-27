/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cle-then <cle-then@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/11 14:36:47 by cle-then          #+#    #+#             */
/*   Updated: 2026/08/12 19:08:20 by cle-then         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

bool	part_of_word(char c)
{
	return ((c <= 'z' && c >= 'a')
		|| (c <= 'Z' && c >= 'A')
		|| (c >= '0' && c <= '9'));
}

char	*ft_strcapitalize(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] <= 'z' && str[i] >= 'a')
		{
			if (i == 0)
				str[i] -= 32;
			else if (!(part_of_word(str[i - 1])))
				str[i] -= 32;
		}
		else if ((i != 0)
			&& (str[i] <= 'Z' && str[i] >= 'A')
			&& part_of_word(str[i - 1]))
			str[i] += 32;
		i++;
	}
	return (str);
}

/*#include <stdio.h>

int     main()
{
        char str[] = "HeLLo w{Orld";

        ft_strcapitalize(str);
        printf("%s", str);
}
*/
