/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jzampier <jzampier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/02 01:24:15 by jzampier          #+#    #+#             */
/*   Updated: 2026/03/03 16:08:41 by jzampier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_numbers(int n00, int n01, int n10, int n11)
{
	if (n10 > n00 || ((n10 == n00) && n11 > n01))
	{
		write(1, &n00, 1);
		write(1, &n01, 1);
		write(1, " ", 1);
		write(1, &n10, 1);
		write(1, &n11, 1);
		if ((n00 == '9' && n01 == '8' && n10 == '9' && n11 == '9'))
			return ;
		write(1, ", ", 2);
	}
}

void	ft_loop_comb(int n00, int n01, int n10, int n11)
{
	n00 = '0';
	while (n00 <= '9')
	{
		n01 = '0';
		while (n01 <= '8')
		{
			n10 = '0';
			while (n10 <= '9')
			{
				n11 = '0';
				while (n11 <= '9')
				{
					ft_print_numbers(n00, n01, n10, n11);
					n11++;
				}
				n10++;
			}
			n01++;
		}
		n00++;
	}
}

void	ft_print_comb2(void)
{
	int	n00;
	int	n01;
	int	n10;
	int	n11;

	ft_loop_comb(n00, n01, n10, n11);
}

/*
int	main(void)
{
	ft_print_comb2();
	return (0);
}
*/