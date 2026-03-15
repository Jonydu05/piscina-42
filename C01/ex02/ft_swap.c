/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jzampier <jzampier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/02 01:55:00 by jzampier          #+#    #+#             */
/*   Updated: 2026/03/02 23:06:02 by jzampier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

void	ft_swap(int *a, int *b)
{
	int	temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

/*
int	main(void)
{
	int	num1;
	int	num2;

	num1 = 42;
	num2 = 24;
	printf("num1: %d, num2: %d\n", num1, num2);
	ft_swap(&num1, &num2);
	printf("\nnum1: %d, num2: %d\n", num1, num2);
	return (0);
}
*/