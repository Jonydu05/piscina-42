/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jzampier <jzampier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/09 21:37:10 by jzampier          #+#    #+#             */
/*   Updated: 2026/03/11 18:41:16 by jzampier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

char	*ft_strcat(char *dest, char *src)
{
	int	dest_len;
	int	i;

	i = 0;
	dest_len = ft_strlen(dest);
	while (src[i] != '\0')
	{
		dest[dest_len + i] = src[i];
		i++;
	}
	dest[dest_len + i] = '\0';
	return (dest);
}

/*
#include <stdio.h>
#include <string.h>
int main(void)
{
	char	dest[56] = "string destination  ";
	char	src[] = {"string source"};
	char 	dest2[56] = {"string destination  "};
	char 	src2[] = {"string source"};

	printf("dest: %s, src: %s\n", dest, src);
	printf("ft_strcat: %s\n", ft_strcat(dest, src));
	printf("dest: %s, src: %s\n", dest, src);

	printf("\n\ndest: %s, src: %s\n", dest2, src2);
	printf("strcat: %s\n", strcat(dest2, src2));
	printf("dest: %s, src: %s\n", dest2, src2);
}
*/