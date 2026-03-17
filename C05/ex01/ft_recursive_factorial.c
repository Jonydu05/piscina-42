/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jzampier <jzampier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/15 23:28:33 by jzampier          #+#    #+#             */
/*   Updated: 2026/03/15 23:28:33 by jzampier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_factorial(int nb)
{
	if (nb < 0)
		return (0);
	if (nb > 0)
		return (nb * ft_recursive_factorial(nb - 1));
	return (1);
}

/* #include <stdio.h>
int main (void)
{
	int fatorial = 5;
	printf("\n\nfatorial: %d! = %d", fatorial, ft_recursive_factorial(fatorial));
}
 */