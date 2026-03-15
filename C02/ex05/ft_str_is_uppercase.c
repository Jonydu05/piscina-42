/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jzampier <jzampier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/05 23:45:46 by jzampier          #+#    #+#             */
/*   Updated: 2026/03/10 20:56:17 by jzampier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_uppercase(char *str)
{
	while (*str != '\0')
	{
		if (*str < 'A' || *str > 'Z')
			return (0);
		str++;
	}
	return (1);
}

/*#include <stdio.h>
int	main(void)
{
	char	str[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	printf("output: %d", ft_str_is_uppercase(str));
}
*/