/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jzampier <jzampier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/05 18:31:08 by jzampier          #+#    #+#             */
/*   Updated: 2026/03/09 20:13:26 by jzampier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

/*
#include <string.h>
#include <stdio.h>
int	main(void)
{
	char dest[] =  {"Esta string é maior que a de destino1123123!"};
	char source[] ={"string source"};

	char dest2[] =  {"Esta string é maior que a de destino1123123!"};
	char source2[] ={"string source"};

	printf("\nDest: %s | Source: %s\n", dest, source);
	printf("ft_strcpy: %s\n", ft_strcpy(dest, source));
	printf("Dest: %s | Source: %s\n", dest, source);

	printf("\nstrcpy:\n");

	printf("\nDest2: %s | Source2: %s\n", dest2, source2);
	printf("strcpy: %s\n", strcpy(dest2, source2));
	printf("Dest2: %s | Source2: %s\n", dest2, source2);
}
*/