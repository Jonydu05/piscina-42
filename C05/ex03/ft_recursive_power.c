/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jzampier <jzampier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/15 23:29:17 by jzampier          #+#    #+#             */
/*   Updated: 2026/03/15 23:29:17 by jzampier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_power(int nb, int power)
{
	if (power < 0)
		return (0);
	if (power > 0)
		return (nb * ft_recursive_power(nb, power - 1));
	return (1);
}

/* #include <stdio.h>
int main (void)
{
	int num = 3;
	int power = 2;
	printf("\nint: %d, potencia: %d, output: %d\n", 
	num, power, ft_recursive_power(num, power));
}
*/