/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jzampier <jzampier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/09 18:22:56 by jzampier          #+#    #+#             */
/*   Updated: 2026/03/10 21:15:42 by jzampier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int				ft_strlen(char *str);
unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size);

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;

	i = 0;
	while (i < size && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (ft_strlen(src));
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
	printf("ft_strlcpy: %s\n", ft_strlcpy(dest, source, 5));
	printf("Dest: %s | Source: %s\n", dest, source);

	printf("\nstrncpy:\n");

	printf("\nDest2: %s | Source2: %s\n", dest2, source2);
	printf("strncpy: %s\n", strncpy(dest2, source2, 12));
	printf("Dest2: %s | Source2: %s\n", dest2, source2);
}
*/