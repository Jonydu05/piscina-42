/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jzampier <jzampier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/03 20:04:22 by jzampier          #+#    #+#             */
/*   Updated: 2026/03/05 17:56:09 by jzampier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	first_index;
	int	last_index;
	int	temp;

	first_index = 0;
	last_index = size - 1;
	while (first_index < last_index)
	{
		temp = tab[last_index];
		tab[last_index] = tab[first_index];
		tab[first_index] = temp;
		first_index++;
		last_index--;
	}
}

/*void	print_array(int *array, int size)
{
	int	i;

	i = 0;
	printf("Array: [");
	while (i < size)
	{
		if (i == size - 1)
			printf("%d ", array[i]);
		else
			printf(" %d, ", array[i]);
		i++;
	}
	printf("]");
}

int	main(void)
{
	// int	numeros[] = {1, 2, 3, 4, 5, 6};
	int	numeros[] = {0, 2, 4, 6, 8, 10, 11, 784, 64};
	int	tamanho = 9;

	print_array(numeros, tamanho);
	printf("\n");
	ft_rev_int_tab(numeros, tamanho);
	print_array(numeros, tamanho);
}
*/