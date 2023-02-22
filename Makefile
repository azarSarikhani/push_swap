# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: asarikha <asarikha@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/08/22 11:11:43 by asarikha          #+#    #+#              #
#    Updated: 2023/02/06 16:11:58 by asarikha         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# Program name
NAME = push_swap

# Compiler
CC = cc
CFLAGS = -Wall -Wextra -Werror

# Libft
LIBFT_PATH	= ./libft/
LIBFT_NAME	= Libft.a
LIBFT		= $(LIBFT_PATH)$(LIBFT_NAME)


# Includes
INC			=	-I ./includes/\
				-I ./libft/\

# Push_swap
# Sources				
SRC_PATH	= src/
SRC = push_swap.c parse.c terminate.c validate.c utils.c sort.c moves.c less_than_five.c
SRCS		= $(addprefix $(SRC_PATH),$(SRC))

# Objects
OBJECTS = $(SRC:.c=.o)				

.PHONY: all  clean fclean re
all: $(NAME)
$(NAME): $(SRCS)
	@echo "Making libft"
	@make -C $(LIBFT_PATH)
	@echo "Compiling push swap..."
	@$(CC) $(CFLAGS) -Llibft -lft $(SRCS) $(INC) -o $(NAME)
	@echo "Push swap ready."

clean:
	@echo "Removing .o object files..."
	@rm -rf $(OBJ)
	@make clean -C $(LIBFT_PATH)

fclean: clean
	@echo "Removing push swap..."
	@rm -f $(NAME)
	@rm -f $(LIBFT)

re: fclean all