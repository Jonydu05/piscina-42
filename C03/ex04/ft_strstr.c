/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jzampier <jzampier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/09 22:29:07 by jzampier          #+#    #+#             */
/*   Updated: 2026/03/09 22:35:00 by jzampier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int	index;
	int	substring_index;

	index = 0;
	if (*to_find == '\0')
		return (str);
	while (str[index] != '\0')
	{
		substring_index = 0;
		while (to_find[substring_index] != '\0'
			&& str[index + substring_index] == to_find[substring_index])
		{
			substring_index++;
		}
		if (to_find[substring_index] == '\0')
			return (&str[index]);
		index++;
	}
	return ((void *)0);
}

/* #include <stdio.h>
#include <string.h>
int	main(void)
{
	char	*str = {"eu quero encontrar o sujeito dessa string"};
	char	*to_find = {""};

	printf("string: %s\n", str);
	printf("procurando: %s\n", to_find);
	printf("output: %s\n", ft_strstr(str, to_find));
	printf("output: %s\n", strstr(str, to_find));
}
 */