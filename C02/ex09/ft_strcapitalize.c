/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jzampier <jzampier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/06 05:45:09 by jzampier          #+#    #+#             */
/*   Updated: 2026/03/10 21:15:29 by jzampier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strlowcase(char *str);
char	*ft_strcapitalize(char *str);
int		is_alpha(char c);
int		is_number(char c);

int	is_alpha(char c)
{
	if ((c < 'A' || c > 'Z') && (c < 'a' || c > 'z'))
		return (0);
	return (1);
}

int	is_number(char c)
{
	if (c < '0' || c > '9')
		return (0);
	return (1);
}

char	*ft_strlowcase(char *str)
{
	char	*init_string;

	init_string = str;
	while (*str != '\0')
	{
		if (*str >= 'A' && *str <= 'Z')
			*str += 32;
		str++;
	}
	return (init_string);
}

char	*ft_strcapitalize(char *str)
{
	int	i;
	int	prev_index;

	str = ft_strlowcase(str);
	i = 0;
	while (str[i] != '\0')
	{
		prev_index = i - 1;
		if (i == 0 && is_alpha(str[i]))
			str[i] -= 32;
		else if (is_alpha(str[i])
			&& !(is_alpha(str[prev_index]) || is_number(str[prev_index])))
			str[i] -= 32;
		i++;
	}
	return (str);
}

/*
#include <stdio.h>
int	main(void)
{
	char	str[] = "525252hi, how are you? 42words forty-two; fifty+and+one";
	printf("input: %s\n", str);
	printf("output: %s", ft_strcapitalize(str));
}
*/