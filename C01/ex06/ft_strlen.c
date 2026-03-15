/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jzampier <jzampier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/02 21:50:08 by jzampier          #+#    #+#             */
/*   Updated: 2026/03/03 19:43:39 by jzampier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

int	ft_strlen(char *str)
{
	int	counter;

	counter = 0;
	while (*str != '\0')
	{
		str++;
		counter++;
	}
	return (counter);
}

/* int	main(void)
{
	char	*str;

	str = "Eu não sei o tamanho dessa string";
	printf("String: %s, contagem: %d", str, ft_strlen(str));
	return (0);
}
 */