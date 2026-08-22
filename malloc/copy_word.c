#include <stdio.h>
#include <stdlib.h>

char	*copy_word(char *str, int len)
{
	char	*word;
	int		i;

	word = malloc((len + 1) * sizeof(char));
	if (word == NULL)
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

int	main(void)
{
	char	*word;
    word = copy_word("Hello World", 11);
    printf("word = %s\n", word);

	free(word);
	return (0);
}

