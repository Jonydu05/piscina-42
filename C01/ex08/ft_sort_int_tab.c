/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jzampier <jzampier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/05 17:55:20 by jzampier          #+#    #+#             */
/*   Updated: 2026/03/05 17:55:20 by jzampier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_sort_int_tab(int *tab, int size)
{
	int	current_index;
	int	temp;
	int	count_changes;

	count_changes = 1;
	while (count_changes > 0)
	{
		printf("\ncountChanges: %d\n", count_changes);
		count_changes = 0;
		current_index = 0;
		while (current_index < size - 1)
		{
			temp = tab[current_index];
			if (tab[current_index] > tab[current_index + 1])
			{
				tab[current_index] = tab[current_index + 1];
				tab[current_index + 1] = temp;
				count_changes++;
			}
			current_index++;
		}
	}
}

void	print_array(int *tab, int size)
{
	int i = 0;
	printf("Array: [ ");
	while (i < size)
	{
		if (i == size - 1)
			printf("%d", tab[i]);
		else
			printf("%d, ", tab[i]);

		i++;
	}
	printf(" ]\n");
}

int	main(void)
{
	int numeros[] = {-42, 54, -2, 542, 42, 54, 43, 1, 5, 3, 2, 0};
	// int numeros[] = {-42, -2, 0, 1, 2, 3, 5, 42, 43, 54, 54, 542};
	int size = 12;

	print_array(numeros, size);
	ft_sort_int_tab(numeros, size);
	print_array(numeros, size);

	return (0);
}
