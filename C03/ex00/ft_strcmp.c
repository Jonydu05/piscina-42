/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jzampier <jzampier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/09 21:00:21 by jzampier          #+#    #+#             */
/*   Updated: 2026/03/12 18:07:57 by jzampier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] != '\0' && s1[i] == s2[i])
		i++;
	return ((unsigned char)s1[i] - (unsigned char)s2[i]);
}

/* #include <string.h>
#include <stdio.h>
int main(void)
{
	char *s1 = {""};
	char *s2 = {"Essas strings são iguais"};
	printf("output: %d\n", ft_strcmp(s1, s2));
	printf("output: %d", strcmp(s1, s2));
}
 */