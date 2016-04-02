/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fk_vadd.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: barbare <barbare@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/02/04 14:42:32 by barbare           #+#    #+#             */
/*   Updated: 2016/02/04 14:44:22 by barbare          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "framework_math/fk_vector.h"

t_vector3		vector_add(t_vector3 u, float r)
{
	return ((t_vector3) { .x = u.x + r, .y = u.y + r, .z = u.z + r });
}