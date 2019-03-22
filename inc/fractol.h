/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fractol.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: groberto <groberto@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/18 12:57:04 by groberto          #+#    #+#             */
/*   Updated: 2019/03/22 15:22:52 by groberto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRACTOL_H
# define FRACTOL_H

# include <stdlib.h>
# include <fcntl.h>
# include <unistd.h>
# include <math.h>
# include <mlx.h>
# include "../lib/libft/include/libft.h"
# define  WIDTH  1500
# define  HEIGHT 1000

typedef struct		s_fractol
{
	void			*mlx;
	void			*win;
	void			*img;
	char			*data;
	int				bpp;
	int				sizeline;
	int				endian;
	int				num;
	unsigned int	itert;
	unsigned int	max_itert;
	double			zx;	
	double			zy;
	double			x;
	double			y;
	double			x1;
	double			y1;
	double			x0;
	double			y0;
	double			x2;
	double			y2;
	double			zoom;
	int				r;
	int				g;
	int				b;
	int				depth;
	int				julia_motion;
}					t_fractol;

int					mlx_first(t_fractol *first);
int					deal_key(int key, t_fractol *param);
void				init_draw(t_fractol *first);
void				make_draw(t_fractol *func);
void				ft_maldelbrot(t_fractol *func);
void				ft_delbrotmal(t_fractol *func);
void				ft_julia(t_fractol *func);
void				ft_burningship(t_fractol *func);
void				ft_douady(t_fractol *func);
void				ft_itert(t_fractol *color);
void				ft_black(t_fractol *color);
void				ft_move(int keycode, t_fractol *param);
void				ft_restart(int keycode, t_fractol *param);
void				ft_details_and_colors(int keycode, t_fractol *param);
int					mlx(t_fractol *first);
int					mouse_motion(int x, int y, t_fractol *param);

#endif
