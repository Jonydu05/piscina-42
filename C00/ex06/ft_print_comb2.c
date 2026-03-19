/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jzampier <jzampier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/02 01:24:15 by jzampier          #+#    #+#             */
/*   Updated: 2026/03/19 01:20:07 by jzampier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	mini_itoa(int num)
{
	return (num + '0');
}

void	ft_print_numbers(int group1, int group2)
{
	char	num1;
	char	num2;
	char	num3;
	char	num4;

	num1 = mini_itoa(group1 / 10);
	num2 = mini_itoa(group1 % 10);
	num3 = mini_itoa(group2 / 10);
	num4 = mini_itoa(group2 % 10);
	write(1, &num1, 1);
	write(1, &num2, 1);
	write(1, " ", 1);
	write(1, &num3, 1);
	write(1, &num4, 1);
	if (!(group1 == 98 && group2 == 99))
		write(1, ", ", 2);
}

void	ft_print_comb2(void)
{
	int	group1;
	int	group2;

	group1 = 0;
	while (group1 <= 98)
	{
		group2 = group1 + 1;
		while (group2 <= 99)
		{
			ft_print_numbers(group1, group2);
			group2++;
		}
		group1++;
	}
}
