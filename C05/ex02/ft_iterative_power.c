/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jzampier <jzampier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/15 23:28:51 by jzampier          #+#    #+#             */
/*   Updated: 2026/03/15 23:28:51 by jzampier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	i;
	int	num;

	i = power;
	if (power < 0)
		return (0);
	num = 1;
	while (i > 0)
	{
		num *= nb;
		i--;
	}
	return (num);
}

/* #include <stdio.h>
int main (void)
{
	int num = 8;
	int power = 2;
	printf("\n\n\nint: %d, potencia: %d, output: %d\n", 
	num, power, ft_iterative_power(num, power));
} */