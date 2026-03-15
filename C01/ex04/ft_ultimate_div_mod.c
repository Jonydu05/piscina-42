/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jzampier <jzampier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/02 21:49:53 by jzampier          #+#    #+#             */
/*   Updated: 2026/03/06 20:38:04 by jzampier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	temp;

	temp = *a;
	*a = *a / *b;
	*b = temp % *b;
}

/*int	main(void)
{
	int	a;
	int	b;

	a = 1;
	b = 5;
	printf("a: %d, b: %d\n", a, b);
	ft_ultimate_div_mod(&a, &b);
	printf("a: %d, b: %d\n", a, b);
	return (0);
}
*/