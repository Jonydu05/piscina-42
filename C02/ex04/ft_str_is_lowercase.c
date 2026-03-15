/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jzampier <jzampier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/05 23:39:10 by jzampier          #+#    #+#             */
/*   Updated: 2026/03/09 13:39:49 by jzampier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_lowercase(char *str)
{
	while (*str != '\0')
	{
		if (*str < 'a' || *str > 'z')
			return (0);
		str++;
	}
	return (1);
}

/* #include <stdio.h>
int	main(void)
{
	char	str[] = "abcdefghijklmnopqrstuvwxyz";
	printf("output: %d", ft_str_is_lowercase(str));
}
*/