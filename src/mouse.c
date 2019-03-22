/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mouse.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: groberto <groberto@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/22 13:55:39 by groberto          #+#    #+#             */
/*   Updated: 2019/03/22 15:21:56 by groberto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fractol.h"

int     mouse_motion(int x, int y, t_fractol *param)
{
    if (param->julia_motion == 1)
	{
		param->x2 = ((double)x - WIDTH / 2) / (double)(param->zoom / 2);
		param->y2 = ((double)y - HEIGHT / 2) / (double)(param->zoom / 2);
	}
	make_draw(param);
	return (0);
	return (1);
}