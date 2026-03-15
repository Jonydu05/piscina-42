/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jzampier <jzampier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/02 01:23:45 by jzampier          #+#    #+#             */
/*   Updated: 2026/03/02 20:07:39 by jzampier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_putchar(char c);
void	ft_create_comb(int comb, int prev_n);
void	ft_print_combn(int nb);
int		ft_validate_params(int nu);
void	ft_print_int(int nu);

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_int(int nu)
{
	if (nu < 10)
		ft_putchar(nu + '0');
	else
	{
		ft_print_int(nu / 10);
		ft_putchar(nu % 10 + '0');
	}
}

int	ft_validate_params(int nu)
{
	int	n;

	n = nu % 10;
	if (n == 0)
		return (1);
	if (n < 10)
		return (n);
	return (ft_validate_params(n));
}

void	ft_create_comb(int comb, int prev_n)
{
	int	inicio;

	inicio = prev_n > 0 ? prev_n : 0;
	ft_print_int(inicio);

	ft_create_comb(comb--, inicio++);
}

void	ft_print_combn(int nb)
{
	int	comb;

	comb = ft_validate_params(nb);
	ft_create_comb(comb, 0);
}

int	main(void)
{
	ft_print_combn(2);
	return (0);
}
