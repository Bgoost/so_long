#include "so_long.h"

int key_pressed(int keycode, void *data)
{
    printf("a%i", keycode);
	// t_vars *t;
	// t = (t_vars *)vars;
	//mlx_destroy_window(t->mlx, t->win);
	if (keycode == ESC)
		exit(0);
	return (0);
}


// if key_press move player and redraw map
// transparencia no sugerido