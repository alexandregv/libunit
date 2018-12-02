NAME = libunit_test_suite

#compiler
CC = clang
CFLAGS = -Werror -Wall -Wextra


#libs
LIB_PATH = ../Framework/
LIB_NAME = libunit.a
LIB = $(addprefix $(LIB_PATH), $(LIB_NAME))

#flags for preprocessor
#CPPFLAGS = -I ../Framework/includes/
#LFLAGS = -Llibunit -lunit

#deps
DEPENDENCIES = $(LIB_PATH)/Makefile $(LIB_PATH)/includes/libunit.h  Makefile

# TODO ENLEVER libft.h ?? verifier
#srcs
MAIN_SRC_PATH = 
MAIN_SRC_NAME = main.c
SRC = $(addprefix $(MAIN_SRC_PATH), $(MAIN_SRC_NAME))

STRLEN_SRC_PATH = strlen/
STRLEN_SRC_NAME = 00_launcher.c 01_basic_test.c
SRC += $(addprefix $(STRLEN_SRC_PATH), $(STRLEN_SRC_NAME))


#obj
OBJ_PATH = obj/
OBJ_NAME = $(SRC:.c=.o)
OBJ = $(addprefix $(OBJ_PATH), $(OBJ_NAME))


#disable implicit rules
.SUFFIXES:
.PHONY: clean fclean all re

all: $(NAME)

$(NAME): $(LIB) $(OBJ) $(DEPENDENCIES)
	@$(CC)  $(CFLAGS) $(OBJ) $(LIB) -o $@
	@echo "$(GREEN)$(NAME) binary compilation succesfull$(END_COLOUR)"

$(OBJ_PATH)%.o: %.c
	@mkdir $(OBJ_PATH) 2> /dev/null || true
	@mkdir $(OBJ_PATH)/$(STRLEN_SRC_PATH) 2> /dev/null || true
	@$(CC) $(CFLAGS) $(CPPFLAGS) -c $< -o $@

$(LIB):
	@echo "$(CYAN)Compiling library $(END_COLOUR)"
	@$(MAKE) -C $(LIB_PATH)

clean:
	@$(MAKE) -C $(LIB_PATH) clean
	@$(RM) $(OBJ)
	@$(RM) -R $(OBJ_PATH) 2> /dev/null || true

fclean: clean
	@$(MAKE) -C $(LIB_PATH) fclean
	@$(RM) $(NAME)

re: 
	@$(MAKE) fclean
	@$(MAKE) -C $(LIB_PATH) re
	@$(MAKE) all