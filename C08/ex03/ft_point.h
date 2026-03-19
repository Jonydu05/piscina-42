/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_point.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jzampier <jzampier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/19 17:10:20 by jzampier          #+#    #+#             */
/*   Updated: 2026/03/19 17:10:20 by jzampier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_POINT_H
#define FT_POINT_H

typedef struct
{
	int x;
	int y;
} t_point;

void	set_point(t_point *point);

#endif