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
LIGHT_BLUE	=	\e[94m
PURPLE		=	\e[35m
GRAY 		=	\e[90m

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
	@$(CC) $(CFLAGS) -c $< -o $@
	

all: $(NAME)

$(NAME): $(OBJ)
	@$(CC) -o $(NAME) $(OBJ)
	@echo -n "$(GREEN)$(BOLD). "
	@sleep 0.2
	@echo -n ". "
	@sleep 0.2
	@echo -n ". "
	@sleep 0.2
	@echo -n "COMPILING "
	@sleep 0.2
	@echo -n ". "
	@sleep 0.2
	@echo -n ". "
	@sleep 0.2
	@echo ".$(ENDCOLOR)"

clean:
	@rm -rf $(OBJ)

	@printf "\n$(PURPLE)  $$(whoami)     ▒▒▒                                    \n          ▒▒ ▒▒           ████████████████████████\n     ▒▒  ▒▒   ▒▒          ████████████████████████\n    ▒▒        ▒▒          ████████████████████████\n   ▒▒        ▒▒           ████████████████████████\n  ▒▒        ▒▒            ████████████████████████\n ▒▒▒▒▒▒    ▒▒             ████████████████████████\n[]   ▒▒  ┌▒▒▒▒▒▒          ████████████████████████\n[]   ▒▒  └─>$(NAME)      ████████████████████████\n[][] ▒▒                   ████████████████████████\n                         ████████████████████████\n                         ████████████████████████\n";


fclean: clean
	@rm -rf $(NAME)
# TETRUAS BUENAS CPIOAS
	@printf "\n$(BLUE)  $$(whoami)    ▒▒▒  \n              ▒▒ ▒▒ \n    ▒▒  ▒▒   ▒▒\n   ▒▒        ▒▒\n  ▒▒        ▒▒ \n ▒▒        ▒▒  \n▒▒▒▒▒▒    ▒▒    \n    ▒▒  ┌▒▒▒▒▒▒\n    ▒▒  └─>$(NAME)      \n    ▒▒         \n";
	@echo -n "$(RED)$(BOLD). "
	@sleep 0.2
	@echo -n ". "
	@sleep 0.2
	@echo -n ". "
	@sleep 0.2
	@echo -n "FCLEANING "
	@sleep 0.2
	@echo -n ". "
	@sleep 0.2
	@echo -n ". "
	@sleep 0.2
	@echo ".$(ENDCOLOR)"
	# copia de tetris
	@printf "\n\n                 ▒▒▒▒▒▒▒▒▒   ▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒\n               ▒▒▒▒▒▒▒▒▒     ▒▒▒▒▒▒  ▒▒▒▒▒▒▒▒\n             ▒▒▒▒▒▒▒▒▒       ▒▒▒▒     ▒▒▒▒▒▒▒\n           ▒▒▒▒▒▒▒▒▒         ▒▒      ▒▒▒▒▒▒▒\n         ▒▒▒▒▒▒▒▒▒                  ▒▒▒▒▒▒▒▒\n       ▒▒▒▒▒▒▒▒▒                  ▒▒▒▒▒▒▒▒\n     ▒▒▒▒▒▒▒▒▒                  ▒▒▒▒▒▒▒▒\n   ▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒     ▒▒▒▒▒▒▒▒     ▒▒\n   ▒▒▒▒▒▒ $$(whoami) ▒▒▒▒▒▒▒   ▒▒▒▒▒▒▒▒    ▒▒▒▒\n   ▒▒▒▒▒▒▒ Tetris ▒▒▒▒▒▒▒▒   ▒▒▒▒▒▒▒▒  ▒▒▒▒▒▒\n   ▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒   ▒▒ Barcelona ▒▒▒\n                  ▒▒▒▒▒▒▒▒   ▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒\n     [][][]       ▒▒▒▒▒▒▒▒      |\n     []     []    ▒▒▒▒▒▒▒▒      ╰┈➤$(NAME) \n          [][][]  ▒▒▒▒▒▒▒▒\n";

	@printf "\n\n                 ▒▒▒▒▒▒▒▒▒   ▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒\n               ▒▒▒▒▒▒▒▒▒     ▒▒▒▒▒▒  ▒▒▒▒▒▒▒▒\n             ▒▒▒▒▒▒▒▒▒       ▒▒▒▒     ▒▒▒▒▒▒▒\n           ▒▒▒▒▒▒▒▒▒         ▒▒      ▒▒▒▒▒▒▒\n         ▒▒▒▒▒▒▒▒▒                  ▒▒▒▒▒▒▒▒\n       ▒▒▒▒▒▒▒▒▒                  ▒▒▒▒▒▒▒▒\n     ▒▒▒▒▒▒▒▒▒                  ▒▒▒▒▒▒▒▒\n   ▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒     ▒▒▒▒▒▒▒▒     ▒▒\n   ▒▒▒▒▒▒ $$(whoami) ▒▒▒▒▒▒▒   ▒▒▒▒▒▒▒▒    ▒▒▒▒\n   ▒▒▒▒▒▒▒ Pacman ▒▒▒▒▒▒▒▒   ▒▒▒▒▒▒▒▒  ▒▒▒▒▒▒\n   ▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒   ▒▒ Barcelona ▒▒▒\n   ░░░░░   ░░░░░  ▒▒▒▒▒▒▒▒   ▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒\n  ░░░░▀░░ ░▄ ░▄ ░ ▒▒▒▒▒▒▒▒      |\n  ░░░░░   ░░░░░░░ ▒▒▒▒▒▒▒▒      ╰┈➤$(NAME) \n   ░░░░░  ░ ░ ░ ░ ▒▒▒▒▒▒▒▒\n"
	
	
	@printf "\n\n                 ▒▒▒▒▒▒▒▒▒   ▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒\n               ▒▒▒▒▒▒▒▒▒     ▒▒▒▒▒▒  ▒▒▒▒▒▒▒▒\n             ▒▒▒▒▒▒▒▒▒       ▒▒▒▒     ▒▒▒▒▒▒▒\n           ▒▒▒▒▒▒▒▒▒         ▒▒      ▒▒▒▒▒▒▒\n         ▒▒▒▒▒▒▒▒▒                  ▒▒▒▒▒▒▒▒\n       ▒▒▒▒▒▒▒▒▒                  ▒▒▒▒▒▒▒▒\n     ▒▒▒▒▒▒▒▒▒                  ▒▒▒▒▒▒▒▒\n   ▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒     ▒▒▒▒▒▒▒▒     ▒▒\n   ▒▒▒▒▒▒ $$(whoami) ▒▒▒▒▒▒▒   ▒▒▒▒▒▒▒▒    ▒▒▒▒\n   ▒▒▒▒▒▒▒ Invader ▒▒▒▒▒▒▒   ▒▒▒▒▒▒▒▒  ▒▒▒▒▒▒\n   ▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒   ▒▒ Barcelona ▒▒▒\n      ░       ░   ▒▒▒▒▒▒▒▒   ▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒\n       ░░░░░░░    ▒▒▒▒▒▒▒▒      |\n      ░░ ░░░ ░░   ▒▒▒▒▒▒▒▒      ╰┈➤$(NAME) \n     ░  ░░░░░  ░  ▒▒▒▒▒▒▒▒\n";

re: fclean all
.PHONY: all clean fclean re
