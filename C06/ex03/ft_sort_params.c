/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jzampier <jzampier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/17 18:17:05 by jzampier          #+#    #+#             */
/*   Updated: 2026/03/17 18:17:05 by jzampier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
	while (*str != '\0')
	{
		write(1, str, 1);
		str++;
	}
}

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] != '\0' && s1[i] == s2[i])
		i++;
	return ((unsigned char)s1[i] - (unsigned char)s2[i]);
}

void	ft_sort_int_tab(char *tab[], int size)
{
	int		current_index;
	int		count_changes;
	char	*temp;

	count_changes = 1;
	while (count_changes > 0)
	{
		count_changes = 0;
		current_index = 1;
		while (current_index < size - 1)
		{
			temp = tab[current_index];
			if (ft_strcmp(tab[current_index], tab[current_index + 1]) > 0)
			{
				tab[current_index] = tab[current_index + 1];
				tab[current_index + 1] = temp;
				count_changes++;
			}
			current_index++;
		}
	}
}

void	print_array(int argc, char *argv[])
{
	int	i;

	i = 1;
	while (i < argc)
	{
		ft_putstr(argv[i]);
		ft_putstr("\n");
		i++;
	}
}

int	main(int argc, char *argv[])
{
	ft_sort_int_tab(argv, argc);
	print_array(argc, argv);
}
