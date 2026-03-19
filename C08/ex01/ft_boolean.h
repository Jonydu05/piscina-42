/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_boolean.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jzampier <jzampier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/19 17:10:02 by jzampier          #+#    #+#             */
/*   Updated: 2026/03/19 17:10:02 by jzampier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_BOOLEAN_H
# define FT_BOOLEAN_H

# define TRUE 1
# define FALSE 0
# define EVEN(nbr) ((nbr % 2 == 0) ? 1 : 0)
# define EVEN_MSG "I have an even number of arguments.\n"
# define ODD_MSG "I have an odd number of arguments.\n"
# define SUCCESS 0
# include <unistd.h>

typedef int	t_bool;
t_bool	ft_is_even(int nbr);
void	ft_putstr(char *str);

#endif