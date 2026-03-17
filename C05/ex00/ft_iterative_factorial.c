/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jzampier <jzampier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/15 23:28:18 by jzampier          #+#    #+#             */
/*   Updated: 2026/03/15 23:28:18 by jzampier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	i;
	int	num;

	if (nb < 0)
		return (0);
	i = nb;
	num = 1;
	while (i > 0)
	{
		num *= i;
		i--;
	}
	return (num);
}

/* #include <stdio.h>
int main (void)
{
	int fatorial = -1;
	printf("\n\nfatorial: %d! = %d", fatorial, ft_iterative_factorial(fatorial));
}
 */