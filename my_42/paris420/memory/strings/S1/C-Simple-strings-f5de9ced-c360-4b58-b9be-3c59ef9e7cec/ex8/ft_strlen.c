/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iameskou <iameskou@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/12 17:13:57 by iameskou          #+#    #+#             */
/*   Updated: 2026/08/12 18:47:38 by iameskou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

// int	main(void)
// {
// 	printf("%d\n", ft_strlen("Hello"));
// 	printf("%d\n", ft_strlen("Hello World!"));
// 	printf("%d\n", ft_strlen("42"));
// 	printf("%d\n", ft_strlen(""));
// 	printf("%d\n", ft_strlen("abcdef"));
// 	return (0);
// }
