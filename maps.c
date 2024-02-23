#include "so_long.h"

void map_generator(t_data data)
{
    char	*relative_path = "./images.xpm";
 	int		img_width;
 	int		img_height;


    data.img = mlx_xpm_file_to_image(data.mlx, relative_path, &img_width, &img_height);
	mlx_put_image_to_window(data.mlx, data.win, data.img, 0, 0);
}