#include <stdlib.h>

/*
** These functions are defined in ft_convert_base2.c.
*/
int		ft_atoi_base(char *nbr, char *base_from);
int		check_base(char *base);
char	*ft_putnbr_base(int nbr, char *base_to);

/*
** ft_convert_base
**
** Example:
**
** nbr       = "11001"
** base_from = "01"
** base_to   = "0123456789"
**
** "11001" binary = 25 decimal
**
** So the result is:
** "25"
*/
char	*ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	int		number;
	char	*result;

	/*
	** First, check that both bases are valid.
	**
	** Example:
	** "01"       -> valid
	** "0123456789" -> valid
	** "001"      -> invalid (duplicate 0)
	*/
	if (!check_base(base_from) || !check_base(base_to))
		return (NULL);

	/*
	** Convert nbr from base_from to an integer.
	**
	** Example:
	** "11001" binary
	**      ↓
	** 25 decimal
	*/
	number = ft_atoi_base(nbr, base_from);

	/*
	** Convert the integer to the target base.
	**
	** Example:
	** 25 decimal
	**      ↓
	** "19" hexadecimal
	*/
	result = ft_putnbr_base(number, base_to);

	return (result);
}