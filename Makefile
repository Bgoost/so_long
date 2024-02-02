NAME = fractal

src = so_long.c

obj = $(src:.c=.o)


FLAGS =  -Ofast

# This is implicit method, this means that the compiler knows
# from before how to convert .0 to .c, what i do is tell him to do it whit my 
# rules. My live my rules!
%.o: %.c so_long.h Makefile
	cc $(FLAGS) -Imlx -c $< -o $@

# My methods, when i do make whit nothing more, the method call is the first one
# of my methods

allmv : make_libs $(NAME)

$(NAME): $(obj) ./mlx/libmlx.a
	#make -C ./mlx
	mv ./mlx/libmlx.a .
	# cp ./libft/libft.a .
	# cp ./printf/libftprintf.a .
	cc $(FLAGS) -L. -lmlx -framework OpenGL -framework Appkit $(obj) -o $(NAME)

make_libs: 
	make -C ./mlx
	# make -C ./libft
	# make -C ./printf

clean:
	make clean -C ./mlx
	# make clean -C ./libft
	# make clean -C ./printf
	rm -f libmlx.a
	rm -f $(obj)

fclean: clean
	rm -f ${NAME}

re: fclean all


.PHONY: all clean fclean re
