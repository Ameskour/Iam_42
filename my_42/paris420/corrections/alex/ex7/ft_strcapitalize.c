/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agarin <agarin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/10 11:40:11 by agarin            #+#    #+#             */
/*   Updated: 2026/08/10 14:38:49 by agarin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strlowcase(char *str)
{
	int		i;

	i = 0;
	while (str[i])
	{
		if ('A' <= str[i] && str[i] <= 'Z')
			str[i] += 32;
		i++;
	}
	return (str);
}

char	*ft_strcapitalize(char *str)
{
	char	v;
	char	ov;
	int		i;

	ft_strlowcase(str);
	i = 0;
	while (str[i])
	{
		v = str[i];
		if (i > 0)
			ov = str[i - 1];
		if ('a' <= v && v <= 'z')
			if (i == 0 || !(('a' <= ov && ov <= 'z')
					|| ('A' <= ov && ov <= 'Z')
					|| ('0' <= ov && ov <= '9')))
				str[i] -= 32;
		i++;
	}
	return (str);
}

int	main(void)
{
	char	str[] = "hello, how are you doing? 42words forty-two; fifty+and+one";
	ft_strcapitalize(str);
	printf("%s", str);
} 