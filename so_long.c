/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crmanzan <crmanzan@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/31 18:48:26 by crmanzan          #+#    #+#             */
/*   Updated: 2024/01/31 18:48:30 by crmanzan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "so_long.h"
#include <mlx.h>

int main(void)
{
    void *mlx;
    void *mlx_win;

    mlx = mlx_init();
    mlx = mlx_new_window(mlx, 600, 600, "hola"); 
    mlx_loop(mlx);
    return 0;
}