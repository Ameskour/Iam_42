/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iameskou <iameskou@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/20 14:50:19 by iameskou          #+#    #+#             */
/*   Updated: 2026/08/20 14:50:21 by iameskou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	is_sep(char c, char *charset)
{
	int	i;

	i = 0;
	while (charset[i])
	{
		if (c == charset[i])
			return (1);
		i++;
	}
	return (0);
}

int	count_words(char *str, char *charset)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (str[i])
	{
		if (!is_sep(str[i], charset))
		{
			if (i == 0 || is_sep(str[i - 1], charset))
				count++;
		}
		i++;
	}
	return (count);
}

char	*copy_word(char *str, char *charset)
{
	char	*word;
	int		len;
	int		i;

	len = 0;
	while (str[len] && !is_sep(str[len], charset))
		len++;
	word = malloc(sizeof(char) * (len + 1));
	if (!word)
		return (NULL);
	i = 0;
	while (i < len)
	{
		word[i] = str[i];
		i++;
	}
	word[i] = '\0';
	return (word);
}

char	**fill_tab(char **tab, char *str, char *charset)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (str[i])
	{
		while (str[i] && is_sep(str[i], charset))
			i++;
		if (str[i])
		{
			tab[j] = copy_word(&str[i], charset);
			if (!tab[j])
				return (NULL);
			j++;
			while (str[i] && !is_sep(str[i], charset))
				i++;
		}
	}
	tab[j] = NULL;
	return (tab);
}

char	**ft_split(char *str, char *charset)
{
	char	**tab;

	tab = malloc(sizeof(char *) * (count_words(str, charset) + 1));
	if (!tab)
		return (NULL);
	if (!fill_tab(tab, str, charset))
		return (NULL);
	return (tab);
}
/*
int	main(void)
{
	char	**tab;
	int		i;

	tab = ft_split("Hello,World-42", ",-");
	if (tab == NULL)
		return (1);

	i = 0;
	while (tab[i])
	{
		printf("tab[%d] = %s\n", i, tab[i]);
		free(tab[i]);
		i++;
	}
	free(tab);

	return (0);
}*/