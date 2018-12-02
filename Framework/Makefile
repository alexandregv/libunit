# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aguiot-- <aguiot--@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/12/02 18:09:43 by aguiot--          #+#    #+#              #
#    Updated: 2018/12/02 18:10:05 by aguiot--         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libunit.a

#compiler
CC = clang
CFLAGS = -Werror -Wall -Wextra

#flags for preprocessor
CPPFLAGS = -Iincludes/

#deps
DEPENDENCIES = includes/libunit.h Makefile

#srcs
SRC_PATH = srcs/
SRC_NAME = load_test.c launch_test.c ft_print_utils.c ft_list_utils.c \
		   ft_putstr.c ft_putnbr.c

SRC = $(addprefix $(SRC_PATH), $(SRC_NAME))

#obj
OBJ_PATH = obj/
OBJ_NAME = $(SRC_NAME:.c=.o)
OBJ = $(addprefix $(OBJ_PATH), $(OBJ_NAME))

# Debug variables
# DBG_CFLAGS = -g -O0
# DBG_NAME = libft-debug.a
# DBG_PATH = debug/
# DBG_OBJ = $(addprefix $(DBG_PATH), $(OBJ_NAME))
# DBG_LIB = $(addprefix $(LIB_PATH)/, $(LIB_PATH)-debug.a)

#disable implicit rules
.SUFFIXES:
.PHONY: clean fclean all re

#colours
END_COLOUR	=	\033[0m
GREEN		=	\033[32m
CYAN		=	\033[36m

all: $(NAME)

$(NAME): $(OBJ)
	@ar rc $(NAME) $(OBJ)
	@ranlib $(NAME)
	@echo "$(GREEN)Libunit compilation succesfull$(END_COLOUR)"


$(OBJ_PATH)%.o: $(SRC_PATH)/%.c $(DEPENDENCIES)
	@mkdir $(OBJ_PATH) 2> /dev/null || true
	@$(CC) $(CFLAGS) $(CPPFLAGS) -o $@ -c $<

debug: $(DBG_OBJ)
	@ar rc $(DBG_NAME) $(DBG_OBJ)
	@ranlib $(DBG_NAME)

$(DBG_PATH)%.o: %.c $(DEPENDENCIES)
	@mkdir $(DBG_PATH) 2> /dev/null || true
	@$(CC) $(DBG_CFLAGS) $(CFLAGS) $(CPPFLAGS) -o $@ -c $<

clean:
	@$(RM) $(OBJ)
	@$(RM) $(DBG_OBJ)
	@$(RM) -R $(OBJ_PATH) 2> /dev/null || true
	@$(RM) -R $(DBG_PATH) 2> /dev/null || true

fclean: clean
	@$(RM) $(NAME)
	@$(RM) $(DBG_NAME)

re: 
	@$(MAKE) fclean
	@$(MAKE) all
