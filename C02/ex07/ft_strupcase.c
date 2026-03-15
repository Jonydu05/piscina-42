/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jzampier <jzampier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/05 23:45:46 by jzampier          #+#    #+#             */
/*   Updated: 2026/03/09 13:40:20 by jzampier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strupcase(char *str)
{
	char	*init_string;

	init_string = str;
	while (*str != '\0')
	{
		if (*str >= 'a' && *str <= 'z')
			*str -= 32;
		str++;
	}
	return (init_string);
}

/*#include <stdio.h>
int	main(void)
{
	char	str[] = "abcdefghijklmnopqrstuvwxyz";
	printf("output: %s", ft_strupcase(str));
}
*/