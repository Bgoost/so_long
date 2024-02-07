# PRETTY GENERICT STUFF
ENDCOLOR	=	\e[0m 
BOLD		= 	\e[1m 
ITALIC		= 	\e[3m 
UNDERLINED	=	\e[4m 

# PRETTY STUFF TEXT COLORS
RED 		=	\e[31m
YELLOY 		=	\e[33m
GREEN 		=	\e[32m
BLUE 		=	\e[34m
GRAY = 			\e[90m

# PRETTY STUFF BG COLORS
RED_BG 		=	\e[41m
YELLOW_BG 	=	\e[43m
GREEN_BG 	= 	\e[42m
BLUE_BG 	=	\e[44m
GRAY_BG 	=	\e[100m

NAME = pruebita
CC = cc
CFLAGS = -Wall -Wextra -Werror

SRCS = tpm.c

OBJ = $(SRCS:.c=.o)


%.o : %.c Makefile
	$(CC) $(CFLAGS) -c $< -o $@

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) -o $(NAME) $(OBJ)

clean:
	@rm -rf $(OBJ)




fclean: clean
	@rm -rf $(NAME)
	@echo -e "\e[31mRed text\e[0m\n"
	# @echo  "$(GREEN)GREEN" 
	# @sleep 2 
	# @echo "$(Yellow)Yellow$(Magenta)Magenta"
	# @echo -n "$(Black)Black"
	# @sleep 2
	@echo  "$(Yellow)Yellow"
	# @echo  "$(BLACKBG)$(RED)RED"
	@echo "$(Blue)Blue"
	@echo "$(Magenta)Magenta"
	@echo "$(Cyan)Cyan"
	@echo "$(Gray)Gray$(ENDCOLOR)"
	@echo "$(Bold)Bold$(ENDCOLOR)"
	@echo "$(Faint)Faint$(ENDCOLOR)"
	@echo "$(Italics)Italics$(ENDCOLOR)"
	@echo "$(Underlined)Underlined$(ENDCOLOR)"

re: fclean all
.PHONY: all clean fclean re
