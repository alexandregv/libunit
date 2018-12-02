NAME = libunit_test_suite

#compiler
CC = clang
CFLAGS = -Werror -Wall -Wextra


#libs
LIBUNIT_PATH = ../Framework/
LIBUNIT_NAME = libunit.a
LIBUNIT = $(addprefix $(LIBUNIT_PATH), $(LIBUNIT_NAME))

LIBFT_PATH = ./libft/
LIBFT_NAME = libft.a
LIBFT = $(addprefix $(LIBFT_PATH), $(LIBFT_NAME))

#deps
DEPENDENCIES = $(LIBUNIT_PATH)/Makefile $(LIBUNIT_PATH)/includes/libunit.h\
			   Makefile

#srcs
MAIN_SRC_PATH =
MAIN_SRC_NAME = main.c
SRC = $(addprefix $(MAIN_SRC_PATH), $(MAIN_SRC_NAME))

STRLEN_SRC_PATH = strlen/
STRLEN_SRC_NAME = 00_launcher.c 01_basic_test.c 02_null_test.c 03_onechar_test.c
SRC += $(addprefix $(STRLEN_SRC_PATH), $(STRLEN_SRC_NAME))

ISUPPER_SRC_PATH = isupper/
ISUPPER_SRC_NAME = 00_launcher.c 01_up_test.c 02_down_test.c 03_int_test.c
SRC += $(addprefix $(ISUPPER_SRC_PATH), $(ISUPPER_SRC_NAME))

TOLOWER_SRC_PATH = tolower/
TOLOWER_SRC_NAME = 00_launcher.c 01_up_test.c 02_down_test.c 03_int_test.c
SRC += $(addprefix $(TOLOWER_SRC_PATH), $(TOLOWER_SRC_NAME))

MEMSET_SRC_PATH = memset/
MEMSET_SRC_NAME = 00_launcher.c 01_basic_test.c 02_onebyte_test.c
SRC += $(addprefix $(MEMSET_SRC_PATH), $(MEMSET_SRC_NAME))

ATOI_SRC_PATH = atoi/
ATOI_SRC_NAME = 00_launcher.c \
				01_basic_test_a.c \
				01_basic_test_b.c \
				01_basic_test_c.c \
				01_basic_test_d.c \
				01_basic_test_e.c \
				01_basic_test_f.c \
				02_hardone_a.c \
				02_hardone_b.c
SRC += $(addprefix $(ATOI_SRC_PATH), $(ATOI_SRC_NAME))

STRCHR_SRC_PATH = strchr/
STRCHR_SRC_NAME = 00_launcher.c 01_basic_test.c 02_empty_test.c
SRC += $(addprefix $(STRCHR_SRC_PATH), $(STRCHR_SRC_NAME))

STRDUP_SRC_PATH = strdup/
STRDUP_SRC_NAME = 00_launcher.c 01_basic_test.c 02_empty_test.c
SRC += $(addprefix $(STRDUP_SRC_PATH), $(STRDUP_SRC_NAME))

STRSTR_SRC_PATH = strstr/
STRSTR_SRC_NAME = 00_launcher.c 01_basic_test.c 02_empty_needle_test.c \
				  03_empty_stack_test.c 04_empty_both_test.c

SRC += $(addprefix $(STRSTR_SRC_PATH), $(STRSTR_SRC_NAME))

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

$(NAME): $(LIBFT) $(LIBUNIT) $(OBJ) $(DEPENDENCIES)
	@$(CC) $(CFLAGS) $(OBJ) $(LIBFT) $(LIBUNIT) -o $@
	@echo "$(GREEN)$(NAME) binary compilation succesfull$(END_COLOUR)"

$(OBJ_PATH)%.o: %.c
	@mkdir $(OBJ_PATH) 2> /dev/null || true
	@mkdir $(OBJ_PATH)/$(STRLEN_SRC_PATH) 2> /dev/null || true
	@mkdir $(OBJ_PATH)/$(ISUPPER_SRC_PATH) 2> /dev/null || true
	@mkdir $(OBJ_PATH)/$(TOLOWER_SRC_PATH) 2> /dev/null || true
	@mkdir $(OBJ_PATH)/$(MEMSET_SRC_PATH) 2> /dev/null || true
	@mkdir $(OBJ_PATH)/$(ATOI_SRC_PATH) 2> /dev/null || true
	@mkdir $(OBJ_PATH)/$(STRCHR_SRC_PATH) 2> /dev/null || true
	@mkdir $(OBJ_PATH)/$(STRDUP_SRC_PATH) 2> /dev/null || true
	@mkdir $(OBJ_PATH)/$(STRSTR_SRC_PATH) 2> /dev/null || true
	@$(CC) $(CFLAGS) $(CPPFLAGS) -c $< -o $@

$(LIBFT):
	@echo "$(CYAN)Compiling libft library $(END_COLOUR)"
	@$(MAKE) -C $(LIBFT_PATH)

$(LIBUNIT):
	@echo "$(CYAN)Compiling unit tests library $(END_COLOUR)"
	@$(MAKE) -C $(LIBUNIT_PATH)

clean:
	@$(MAKE) -C $(LIBUNIT_PATH) clean
	@$(MAKE) -C $(LIBFT_PATH) clean
	@$(RM) $(OBJ)
	@$(RM) -R $(OBJ_PATH) 2> /dev/null || true

fclean: clean
	@$(MAKE) -C $(LIBUNIT_PATH) fclean
	@$(MAKE) -C $(LIBFT_PATH) fclean
	@$(RM) $(NAME)

re: 
	@$(MAKE) fclean
	@$(MAKE) -C $(LIBUNIT_PATH) re
	@$(MAKE) all
