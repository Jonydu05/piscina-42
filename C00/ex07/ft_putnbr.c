/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jzampier <jzampier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/02 01:23:45 by jzampier          #+#    #+#             */
/*   Updated: 2026/03/19 00:07:04 by jzampier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nu)
{
	if (nu == -2147483648)
	{
		write(1, "-2147483648", 11);
		return ;
	}
	if (nu < 0)
	{
		ft_putchar('-');
		nu = nu * (-1);
	}
	if (nu < 10)
	{
		ft_putchar(nu + '0');
	}
	else
	{
		ft_putnbr(nu / 10);
		ft_putchar(nu % 10 + '0');
	}
}

/*
int	main(void)
{
	ft_putnbr(42);
	return (0);
}
*/