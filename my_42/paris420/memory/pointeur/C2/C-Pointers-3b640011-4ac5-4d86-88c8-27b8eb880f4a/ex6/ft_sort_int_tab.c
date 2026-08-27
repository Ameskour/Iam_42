/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iameskou <iameskou@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/11 13:07:51 by iameskou          #+#    #+#             */
/*   Updated: 2026/08/11 13:08:54 by iameskou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
 * Sorts an array of integers in ascending order.
 * Compares each element with the elements after it.
 * If the first element is bigger, the two values are swapped.
 */
void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	j;
	int	tmp;

	i = 0;
	while (i < size - 1)
	{
		j = i + 1;
		while (j < size)
		{
			if (tab[i] > tab[j])
			{
				tmp = tab[i];
				tab[i] = tab[j];
				tab[j] = tmp;
			}
			j++;
		}
		i++;
	}
}
/*
int main(void){
    int	tab[] = {5, 2, 8, 1, 3};
	int	size;
	int	i;

	size = 5;
    ft_sort_int_tab(tab,size);
	i = 0;
	while (i < size)
	{
		printf("%d ", tab[i]);
		i++;
	}
	printf("\n");
    return 0;
}
*/
