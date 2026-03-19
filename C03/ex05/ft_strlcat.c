/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jzampier <jzampier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/12 18:19:12 by jzampier          #+#    #+#             */
/*   Updated: 2026/03/12 18:19:12 by jzampier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlen(char *str)
{
	unsigned int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	dest_len;

	i = 0;
	dest_len = ft_strlen(dest);
	if (dest_len >= size)
		return (size);
	if (!size || !dest)
		return (dest_len + ft_strlen(src));
	while (src[i] != '\0' && i < size - dest_len - 1)
	{
		dest[dest_len + i] = src[i];
		i++;
	}
	dest[dest_len + i] = '\0';
	return (dest_len + ft_strlen(src));
}

// #include <stdio.h>
// int	main (void)
// {
// 	char dest[8] = {"1337 42"};
// 	char *src = {"Born to code"};
// 	unsigned	int	size = 0;
// 	printf("dest: %s\n", dest);
// 	printf("src: %s\n", src);
// 	printf("ft_strlcat: %d\n", ft_strlcat(dest, src, size));
// 	printf("dest: %s\n", dest);
// 	return (0);
// }