/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jzampier <jzampier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/09 21:00:21 by jzampier          #+#    #+#             */
/*   Updated: 2026/03/12 18:14:33 by jzampier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	if (!n)
		return (0);
	while (s1[i] != '\0' && s1[i] == s2[i] && i < n - 1)
		i++;
	return ((unsigned char)s1[i] - (unsigned char)s2[i]);
}

/* 
#include <stdio.h>
#include <string.h>
int main(void)
{
	char *s1 = {""};
	char *s2 = {"Essas strings são iguais"};
	unsigned int tamanho = 0;
	printf("output: %d\n", ft_strncmp(s1, s2, tamanho));
	printf("output: %d", strncmp(s1, s2, tamanho));
}
 */