/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crmanzan <crmanzan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/31 18:28:29 by crmanzan          #+#    #+#             */
/*   Updated: 2024/02/23 19:39:42 by crmanzan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SO_LONG_H
# define SO_LONG_H

# include "mlx/mlx.h"

# include <stdio.h>
# include <stdlib.h>
# define ESC 53
# define W 13
# define A 0
# define S 1
# define D 2

typedef struct s_imagen
{
	void	*img;
	char	*addr;
	int		bits_per_pixel;
	int		line_length;
	int		endian;
	int		img_width;
	int		img_height;
}				t_imagen;


typedef struct s_sprites
{
	t_imagen	player_up;
	t_imagen	player_down;
	t_imagen	player_left;
	t_imagen	player_right;
	t_imagen	background;
	t_imagen	strawberries;
}				t_sprites;


typedef struct s_map
{
	int		objects;
	int		x;
	int		y;
}				t_map;


typedef struct s_data
{
	void		*mlx;
	void		*win;
	t_imagen	main_img;
	int			movements;
	int			collected;
	t_map		map;
	t_sprites	sprites;
}				t_data;

int  key_pressed(int keycode, void *data);
void map_generator();

// typedef struct s_data {
//     void    *img;
//     char    *addr;
//     int     bits_per_pixel;
//     int     line_length;
//     int     endian;
// }           t_data;

#endif