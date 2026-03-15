/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jzampier <jzampier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/26 17:01:51 by jzampier          #+#    #+#             */
/*   Updated: 2026/03/02 16:54:59 by jzampier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_numbers(void)
{
	int	i;

	i = 48;
	while (i < 58)
	{	
		write(1, &i, 1);
		i++;
	}
}

/*
int	main (void)
{
	ft_print_numbers();
	return (0);
}
*/