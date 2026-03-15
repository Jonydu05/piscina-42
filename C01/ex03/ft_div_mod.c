/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jzampier <jzampier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/02 02:00:57 by jzampier          #+#    #+#             */
/*   Updated: 2026/03/03 17:06:24 by jzampier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}

/*
int	main(void)
{
	int	a;
	int	b;
	int	div;
	int	mod;

	a = 42;
	b = 2;
	div = 42;
	mod = 42;
	printf("a: %d, b: %d, div: %d, mod: %d\n", a, b, div, mod);
	ft_div_mod(a, b, &div, &mod);
	printf("a: %d, b: %d, div: %d, mod: %d\n", a, b, div, mod);
	return (0);
}
*/