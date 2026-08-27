/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush04.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iameskou <iameskou@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/08 16:02:35 by iameskou          #+#    #+#             */
/*   Updated: 2026/08/08 16:02:38 by iameskou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	print_char(int row, int col, int x, int y)  //(col 5, row 3 )
{
	if (row == 1 && col == 1)
		ft_putchar('A');
	else if (row == 1 && col == x)
		ft_putchar('C');
	else if (row == y && col == 1)
		ft_putchar('C');
	else if (row == y && col == x)
		ft_putchar('A');

	else if (row == 1 || row == y)
		ft_putchar('B');
	else if (col == 1 || col == x)
		ft_putchar('B');
	else
		ft_putchar(' ');
}

void	rush(int x, int y)
{
	int	row;
	int	col;

	if (x <= 0 || y <= 0)
		return ;
	row = 1;
	while (row <= y)
	{
		col = 1;
		while (col <= x)
		{
			print_char(row, col, x, y);
			col++;
		}
		ft_putchar('\n');
		row++;
	}
}
