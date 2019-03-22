/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   color.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: groberto <groberto@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/21 13:13:04 by groberto          #+#    #+#             */
/*   Updated: 2019/03/21 14:25:47 by groberto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fractol.h"

void         ft_itert(t_fractol *color)
{
    unsigned char	r;
	unsigned char	g;
	unsigned char	b;

	r = (color->itert * color->r / color->max_itert * color->depth);
	g = (color->itert * color->g / color->max_itert * color->depth);
	b = (color->itert * color->b / color->max_itert * color->depth);
	
	color->data[(((int)color->y * WIDTH + (int)color->x) * 4) + 2] = r;
	color->data[(((int)color->y * WIDTH + (int)color->x) * 4) + 1] = g;
	color->data[(((int)color->y * WIDTH + (int)color->x) * 4)] = b;
}

void        ft_black(t_fractol *color)
{
    color->data[(((int)color->y * WIDTH + (int)color->x) * 4) + 2] = 0;
	color->data[(((int)color->y * WIDTH + (int)color->x) * 4) + 1] = 0;
	color->data[(((int)color->y * WIDTH + (int)color->x) * 4)] = 0;
}