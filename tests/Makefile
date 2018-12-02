NAME = libunit_test_suite

#compiler
CC = clang -g
CFLAGS = -Werror -Wall -Wextra


#libs
LIB_PATH = ../framework/
LIB_NAME = libunit.a
LIB = $(addprefix $(LIB_PATH), $(LIB_NAME))

#deps
DEPENDENCIES = $(LIB_PATH)/Makefile $(LIB_PATH)/includes/libunit.h  Makefile

#srcs
MAIN_SRC_PATH =
MAIN_SRC_NAME = main.c 00_launcher.c 01_success_test.c 02_failure_test.c \
				03_segv_test.c 04_bus_test.c 05_timeout_test.c 06_fpe_test.c
SRC = $(addprefix $(MAIN_SRC_PATH), $(MAIN_SRC_NAME))

#obj
OBJ_PATH = obj/
OBJ_NAME = $(SRC:.c=.o)
OBJ = $(addprefix $(OBJ_PATH), $(OBJ_NAME))

#colours
END_COLOUR	=	\033[0m
GREEN		=	\033[32m
CYAN		=	\033[36m

#disable implicit rules
.SUFFIXES:
.PHONY: clean fclean all re test

all: $(NAME)

test: $(NAME)
	@./$(NAME) 2> /dev/null

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
	@$(RM) -rf $(NAME).dSYM

re: 
	@$(MAKE) fclean
	@$(MAKE) -C $(LIB_PATH) re
	@$(MAKE) all
