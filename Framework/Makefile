NAME = libunit.a

#compiler
CC = clang
CFLAGS = -Werror -Wall -Wextra

#flags for preprocessor
CPPFLAGS = -Iincludes/

#deps
DEPENDENCIES = includes/libunit.h includes/libft.h Makefile

# TODO ENLEVER libft.h ??


#srcs
SRC_PATH = srcs/
SRC_NAME = load_test.c launch_test.c ft_utils.c\
			ft_strlen.c ft_putnbr.c

#TODO enlever inutiles
SRC = $(addprefix $(SRC_PATH), $(SRC_NAME))

#obj
OBJ_PATH = obj/
OBJ_NAME = $(SRC_NAME:.c=.o)
OBJ = $(addprefix $(OBJ_PATH), $(OBJ_NAME))

# Debug variables
 DBG_CFLAGS = -g -O0
 DBG_NAME = libft-debug.a
 DBG_PATH = debug/
 DBG_OBJ = $(addprefix $(DBG_PATH), $(OBJ_NAME))
# DBG_LIB = $(addprefix $(LIB_PATH)/, $(LIB_PATH)-debug.a)

#disable implicit rules
.SUFFIXES:
.PHONY: clean fclean all re

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
