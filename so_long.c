/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crmanzan <crmanzan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/31 18:48:26 by crmanzan          #+#    #+#             */
/*   Updated: 2024/02/23 18:52:46 by crmanzan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "so_long.h"
#include <mlx.h>
#include <stdio.h>
#include <stdlib.h>




int	main(void){
	t_data	data;
	// char	*relative_path = "./images.xpm";
 	// int		img_width;
 	// int		img_height;
	
	data.mlx = mlx_init();
	data.win = mlx_new_window(data.mlx, 1920, 1080, "Susana te quiere conocer ;)");
	mlx_hook(data.win, 3, 0, key_pressed, &data);
	map_generator(data);
	// data.img = mlx_xpm_file_to_image(data.mlx, relative_path, &img_width, &img_height);
	// mlx_put_image_to_window(data.mlx, data.win, data.img, 0, 0);
	mlx_loop(data.mlx);
	return(0);
}


// int main(void)
// {

// 	void	*mlx;
// 	void	*img;
// 	void	*win;
// 	char	*relative_path = "./images.xpm";
// 	int		img_width;
// 	int		img_height;

// 	mlx = mlx_init();
// 	win = mlx_new_window(mlx, 600, 600, "marta te quiere conocer ;)");
// 	img = mlx_xpm_file_to_image(mlx, relative_path, &img_width, &img_height);  
// 	mlx_put_image_to_window(mlx, win, img, 0, 0);
// 	mlx_loop(mlx);
//     return 0;
    
// }