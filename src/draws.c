/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   draws.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: groberto <groberto@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/20 10:14:26 by groberto          #+#    #+#             */
/*   Updated: 2019/03/22 15:29:46 by groberto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fractol.h"
#include <stdio.h> 

void		ft_maldelbrot(t_fractol *func)
{
	double temp;

	temp = 0;
	func->zx = (func->x - func->x1 / 2) / func->zoom - 0.5;
	func->zy = (func->y - func->y1 / 2) / func->zoom;
	func->itert = 0;
	func->x0 = func->zx;
	func->y0 = func->zy;
	while (func->zx * func->zx + func->zy * func->zy < 4 && func->itert < func->max_itert) 
	{
		temp = func->zx;
		func->zx = func->zx * func->zx - func->zy * func->zy + func->x0 + func->x2;
		func->zy = 2 * temp * func->zy + func-> y0 + func->y2;
		func->itert++;
	}
	if (func->itert == func->max_itert)
		ft_black(func);
	//	return (black);
	else
		ft_itert(func);
	//	return (func->itert);
}

void		ft_julia(t_fractol *func)
{
	double temp;

	temp = 0;
	func->zx = (func->x - func->x1 / 2) / func->zoom;
	func->zy = (func->y - func->y1 / 2) / func->zoom;
	func->itert = 0;
	func->x0 = func->x2;
	func->y0 = func->y2;
	while (func->zx * func->zx + func->zy * func->zy < 4 && func->itert < func->max_itert) 
	{
		temp = func->zx;
		func->zx = func->zx * func->zx - func->zy * func->zy + func->x0;
		func->zy = 2 * temp * func->zy + func->x0;
		func->itert++;
	}
	if (func->itert == func->max_itert)
		ft_black(func);
	//	return (black);
	else
		ft_itert(func);
	//	return (func->itert);
}

void		ft_delbrotmal(t_fractol *func)
{
	double temp;

	temp = 0;
	func->zx = (func->x - func->x1 / 2) / func->zoom;
	func->zy = (func->y - func->y1 / 2) / func->zoom;
	func->x0 =  func->zx;
	func->y0 = func->zy;
	func->itert = 0;
	while (func->zx * func->zx + func->zy * func->zy < 4 && func->itert < func->max_itert) 
	{
		temp = func->zx;
		func->zx = func->zx * func->zx - func->zy * func->zy - func->zx + func->x0 + func->x2;
		func->zy = 2 * temp * func->zy - func->zy + func->y0 + func->y2;
		func->itert++;
	}
	if (func->itert == func->max_itert)
		ft_black(func);
	//	return (black);
	else
		ft_itert(func);
	//	return (func->itert);
}

void		ft_burningship(t_fractol *func)
{
	double temp;

	temp = 0;
	func->zx = (func->x - func->x1 / 2) / func->zoom - 0.5;
	func->zy = (func->y - func->y1 / 2) / func->zoom - 0.5;
	func->x0 = func->zx;
	func->y0 = func->zy;
	func->itert = 0;
	while (func->zx * func->zx + func->zy * func->zy < 4 && func->itert < func->max_itert) 
	{
		temp = func->zx;
		func->zx = func->zx * func->zx - func->zy * func->zy + func->x0 + func->x2;
		func->zy = 2 * ft_dabs(temp * func->zy) + func->y0 + func->y2;
		func->itert++;
	}
	if (func->itert == func->max_itert)
		ft_black(func);
	//	return (black);
	else
		ft_itert(func);
	//	return (func->itert);
}

void		ft_douady(t_fractol *func)
{
	double temp;

	temp = 0;
	func->zx = (func->x - func->x1 / 2) / func->zoom;
	func->zy = (func->y - func->y1 / 2) / func->zoom;
	func->x0 = -0.12565651;
	func->y0 = 0.65720;
	func->itert = 0;
	while (func->zx * func->zx + func->zy * func->zy < 4 && func->itert < func->max_itert) 
	{
		temp = func->zx;
		func->zx = func->zx * func->zx - func->zy * func->zy + func->x0 + func->x2;
		func->zy = 2 * temp * func->zy + func->y0 + func->y2;
		func->itert++;
	}
	if (func->itert == func->max_itert)
		ft_black(func);
	//	return (black);
	else
		ft_itert(func);
	//	return (func->itert);
}
