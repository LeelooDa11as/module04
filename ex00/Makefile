# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: kkoval <kkoval@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/03/22 19:34:22 by kkoval            #+#    #+#              #
#    Updated: 2025/03/22 19:34:24 by kkoval           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = animal
SRC = main.cpp Animal.cpp Dog.cpp Cat.cpp WrongAnimal.cpp WrongCat.cpp
F_OBJ = obj/
OBJ = $(addprefix $(F_OBJ), $(SRC:.cpp=.o))
DEP = $(addprefix $(F_OBJ), $(SRC:.cpp=.d))
CC = c++
C_FLAGS = -Wall -Wextra -Werror -MMD -std=c++98 -g -fsanitize=address

# color codes
BLACK    =   \033[0;39m
BLUE     =   \033[34m
GREEN    =   \033[32m
RED      =   \033[31m

all: dir $(NAME)

-include ${DEP}

dir:
	@mkdir -p $(F_OBJ)

#compile object files
$(F_OBJ)%.o: %.cpp Makefile
	@echo "Compiling $< "
	@$(CC) $(C_FLAGS) -I ./inc -c $< -o $@

$(NAME):: $(OBJ)
	@$(CC) $(C_FLAGS) $(^) -o $(NAME)
	@echo "$(GREEN)Everything has been compilated.$(BLACK)"

$(NAME)::
	@echo "$(GREEN)No actions needed.$(BLACK)"

clean:
	$(RM) $(OBJ) $(DEP)
	$(RM) -R obj

fclean: clean
	$(RM) $(NAME)
	@echo "$(RED)Everything has been cleaned.$(BLACK)"

re: clean fclean

.PHONY: all clean fclean re