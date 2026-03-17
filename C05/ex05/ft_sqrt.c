/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jzampier <jzampier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/16 17:25:36 by jzampier          #+#    #+#             */
/*   Updated: 2026/03/16 21:34:03 by jzampier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int	num;
	int	sqrt;

	num = 0;
	sqrt = 1;
	if (nb < 0)
		return (0);
	while (num != nb)
	{
		if (sqrt * sqrt == nb)
			return (sqrt);
		if (sqrt >= nb)
			return (0);
		sqrt++;
	}
	return (0);
}

/*#include <stdio.h>
int main (void)
{
	int num = -5;
	printf("num: %d\nraiz: %d", num, ft_sqrt(num));
}*/