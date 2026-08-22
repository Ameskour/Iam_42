#include <stdio.h>

/*
** Check if the base is valid.
**
** Return:
** 1 → valid
** 0 → invalid
*/
int	check_base(char *base)
{
	int	i;
	int	j;

	i = 0;

	/* Base must have at least 2 characters. */
	while (base[i] != '\0')
		i++;

	if (i < 2)
		return (0);

	/*
	** Check every character.
	*/
	i = 0;
	while (base[i] != '\0')
	{
		/*
		** '+' and '-' are not allowed.
		*/
		if (base[i] == '+' || base[i] == '-')
			return (0);

		/*
		** Check for whitespace.
		*/
		if (base[i] == ' ' || base[i] == '\t'
			|| base[i] == '\n')
			return (0);

		/*
		** Compare this character with
		** all characters after it.
		*/
		j = i + 1;
		while (base[j] != '\0')
		{
			/*
			** Same character twice = duplicate.
			*/
			if (base[i] == base[j])
				return (0);

			j++;
		}

		i++;
	}

	/* Everything is OK. */
	return (1);
}

int	main(void)
{
	printf("\"01\" = %d\n", check_base("01"));

	printf("\"0123456789\" = %d\n",
		check_base("0123456789"));

	printf("\"0\" = %d\n", check_base("0"));

	printf("\"001\" = %d\n", check_base("001"));

	printf("\"01+23\" = %d\n",
		check_base("01+23"));

	printf("\"01 23\" = %d\n",
		check_base("01 23"));


	printf("\"01233\" = %d\n",
		check_base("01233"));


	return (0);
}