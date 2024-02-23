#include "so_long.h"

void    load_xpm_img(t_imagen *img_data, t_data data, char *filename);
unsigned int    *get_img_pixel_ptr(t_imagen *img, int x, int y);

void map_generator(t_data data)
{
    char	*relative_path = "./images.xpm";
 	// int		img_width;
 	// int		img_height;


    load_xpm_img(&data.main_img, data, relative_path);
    *get_img_pixel_ptr(&data.main_img, 15, 20) = 0x00FF00FF;
    // data.main_img.img = mlx_xpm_file_to_image(data.mlx, relative_path, &img_width, &img_height);
	mlx_put_image_to_window(data.mlx, data.win, data.main_img.img, 0, 0);

}

void    load_xpm_img(t_imagen *img_data, t_data data, char *filename)
{
    img_data->img = mlx_xpm_file_to_image(data.mlx, filename, &img_data->img_width, &img_data->img_height);
    if (!img_data->img)
        exit(1);
    img_data->addr = mlx_get_data_addr(img_data->img, &img_data->bits_per_pixel, &img_data->line_length, &img_data->endian);
    if (!img_data->addr)
        exit(1);
}

unsigned int    *get_img_pixel_ptr(t_imagen *img, int x, int y)
{
    char    *dst;

    dst = img->addr + (y * img->line_length + x * (img->bits_per_pixel / 8));
    return ((unsigned int *)dst);
}