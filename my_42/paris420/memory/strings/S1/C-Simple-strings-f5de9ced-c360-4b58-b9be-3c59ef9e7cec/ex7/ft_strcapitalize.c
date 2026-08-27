/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iameskou <iameskou@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/12 18:24:19 by iameskou          #+#    #+#             */
/*   Updated: 2026/08/12 18:47:04 by iameskou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcapitalize(char *str)
{
	int	i;
	int	new_word;

	i = 0;
	new_word = 1;
	while (str[i] != '\0')
	{
		if ((str[i] >= 'a' && str[i] <= 'z')
			|| (str[i] >= 'A' && str[i] <= 'Z')
			|| (str[i] >= '0' && str[i] <= '9'))
		{
			if (new_word && str[i] >= 'a' && str[i] <= 'z')
				str[i] = str[i] - 32;
			else if (!new_word && str[i] >= 'A' && str[i] <= 'Z')
				str[i] = str[i] + 32;
			new_word = 0;
		}
		else
			new_word = 1;
		i++;
	}
	return (str);
}
/*

int	main(void)
{
	char	str[] = "hello, how are you doing? 42words forty-two; fifty+and+one";

	printf("%s\n", ft_strcapitalize(str));
	return (0);
}
	*/

// 	// methode 2
// 	char	*ft_strcapitalize(char *str)
// {
// 	int	i;

// 	i = 0;
// 	while (str[i] != '\0')
// 	{
// 		if (str[i] >= 'a' && str[i] <= 'z')
// 		{
// 			if (i == 0
// 				|| !((str[i - 1] >= 'a' && str[i - 1] <= 'z')
// 				|| (str[i - 1] >= 'A' && str[i - 1] <= 'Z')
// 				|| (str[i - 1] >= '0' && str[i - 1] <= '9')))
// 				str[i] = str[i] - 32;
// 		}
// 		else if (str[i] >= 'A' && str[i] <= 'Z')
// 		{
// 			if (i != 0
// 				&& ((str[i - 1] >= 'a' && str[i - 1] <= 'z')
// 				|| (str[i - 1] >= 'A' && str[i - 1] <= 'Z')
// 				|| (str[i - 1] >= '0' && str[i - 1] <= '9')))
// 				str[i] = str[i] + 32;
// 		}
// 		i++;
// 	}
// 	return (str);
// }