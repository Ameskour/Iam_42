/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iameskou <iameskou@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/12 16:55:59 by iameskou          #+#    #+#             */
/*   Updated: 2026/08/12 18:45:39 by iameskou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (!(str[i] >= 32 && str[i] <= 126))
			return (0);
		i++;
	}
	return (1);
}

// int	main(void)
// {
// 	printf("%d\n", ft_str_is_printable("Hello"));
// 	printf("%d\n", ft_str_is_printable("Hello World!"));
// 	printf("%d\n", ft_str_is_printable("\n"));
// 	printf("%d\n", ft_str_is_printable("\t"));
// 	printf("%d\n", ft_str_is_printable(""));
// 	return (0);
// }
