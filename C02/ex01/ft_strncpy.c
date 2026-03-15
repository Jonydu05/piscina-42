/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jzampier <jzampier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/09 18:23:07 by jzampier          #+#    #+#             */
/*   Updated: 2026/03/10 20:55:39 by jzampier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (i < n && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
/*
#include <string.h>
#include <stdio.h>
int	main(void)
{
	char dest[] =  {"Esta string é maior que a de destino1123123!"};
	char source[] ={"Hi"};

	char dest2[] =  {"Esta string é maior que a de destino1123123!"};
	char source2[] ={"Hi"};

	printf("\nDest: %s | Source: %s\n", dest, source);
	printf("ft_strncpy: %s\n", ft_strncpy(dest, source, 5));
	printf("Dest: %s | Source: %s\n", dest, source);

	printf("\nstrncpy:\n");

	printf("\nDest2: %s | Source2: %s\n", dest2, source2);
	printf("strncpy: %s\n", strncpy(dest2, source2, 5));
	printf("Dest2: %s | Source2: %s\n", dest2, source2);
}
*/