NAME = TicTacToe

SRC = ./srcs/check.c ./srcs/init_tab.c ./srcs/main.c ./srcs/play.c

OBJ = ./check.o ./init_tab.o ./main.o ./play.o

HEADER = ./

INCLUDES = -I ./includes/

all: $(NAME)

$(NAME):
	@clear
	@echo "\033[5;49;32m===TicTacToe : Compilation...\033[0m"
	@echo "\033[5;49;32m[                              ]\033[0m"
	@gcc -c $(SRC) $(INCLUDES)
	@sleep 0.2
	@clear
	@echo "\033[5;49;32m===TicTacToe : Compilation...\033[0m"
	@echo "\033[5;49;32m[======                        ]\033[0m"
	@gcc $(OBJ) $(INCLUDES) -o $(NAME)
	@sleep 0.2
	@clear
	@echo "\033[5;49;32m===TicTacToe : Compilation...\033[0m"
	@echo "\033[5;49;32m[============                  ]\033[0m"
	@mkdir objs
	@sleep 0.2
	@clear
	@echo "\033[5;49;32m===TicTacToe : Compilation...\033[0m"
	@echo "\033[5;49;32m[==================            ]\033[0m"
	@mv $(OBJ) objs
	@sleep 0.2
	@clear
	@echo "\033[5;49;32m===TicTacToe : Compilation...\033[0m"
	@echo "\033[5;49;32m[========================      ]\033[0m"
	@sleep 0.2
	@clear
	@echo "\033[5;49;32m===TicTacToe : Compilation...\033[0m"
	@echo "\033[5;49;32m[==============================]\033[0m"
	@echo "\033[5;49;32m===TicTacToe : Done\033[0m"


.PHONY: clean

clean :
	 @rm -Rf objs
	 @echo "\033[38;5;40m[✓] \033[38;5;15m Removed object files"

fclean: clean
	@rm -Rf $(NAME)
	@echo "\033[38;5;40m[✓] \033[38;5;15m Removed executable" $(NAME)

re : fclean all
