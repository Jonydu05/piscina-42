/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jzampier <jzampier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/05 23:45:46 by jzampier          #+#    #+#             */
/*   Updated: 2026/03/09 20:29:25 by jzampier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_printable(char *str)
{
	while (*str != '\0')
	{
		if (*str < 32 || *str == 127)
			return (0);
		str++;
	}
	return (1);
}
/*#include <stdio.h>
int	main(void)
{
	char	str[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	printf("output: %d", ft_str_is_printable(str));
}
*/