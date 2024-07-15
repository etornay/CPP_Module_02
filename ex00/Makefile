BLUE	=\033[1;34m\033[7m
CYAN	=\033[1;36m\033[7m
GREEN	=\033[1;32m\033[7m
ORANGE	=\033[1;38;5;208m
PURPLE	=\033[1;38;5;129m
RED		=\033[1;31m
MAGENTA	=\033[1;35m\033[4m
YELLOW	=\033[1;33m
RESET	=\033[0m

NAME = Fixed

SRC = 	main.cpp \
		Fixed.cpp

OBJ = $(SRC:.cpp=.o)

CC = clang++

FLAGS = -Wall -Werror -Wextra

STD = -std=c++98

$(NAME):	$(OBJ)
				@echo "$(YELLOW)* Compiling. Please, wait...$(RESET)"
				@$(CC) $(FLAGS) $(STD) $(SRC) -o $(NAME)
				@echo "  $(CYAN)PROGRAM READY$(RESET)"

$(OBJ):	%.o : %.cpp
				@$(CC) $(FLAGS) $(STD) -c $< -o $@

all:		$(NAME)

clean:
				@echo "$(ORANGE)* Cleaning objects. Please, wait...$(RESET)"
				@rm -f $(OBJ)
				@echo "  $(GREEN)DONE$(RESET)"

fclean:
				@echo "$(RED)* Cleaning all files. Please, wait...$(RESET)"
				@rm -f $(NAME) $(OBJ)
				@echo "  $(GREEN)DONE$(RESET)"

re:				fclean all

.PHONY:			all re clean fclean