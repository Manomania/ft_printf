NAME 				= 	libftprintf.a
HEAD				=	ft_printf.h
INC_DIR				=	.
OBJ_DIR				=	obj/
CC 					= 	gcc
CFLAGS 				= 	-Wall -Wextra -Werror
AR					=	ar rcs
RM					=	rm -f
SRC 				=	ft_printf.c \
						parsing.c \
						print_adress.c \
						print_hexa.c \
						print_char.c \
						print_int.c
OBJ 				= 	$(SRC:%.c=$(OBJ_DIR)%.o)

COLOUR_GREEN		=	\033[0;32m
COLOUR_RED			=	\033[0;31m
END_COLOUR			=	\033[0m

$(OBJ_DIR)%.o: 					%.c $(HEAD) | $(OBJ_DIR)
							$(CC) $(CFLAGS) -I$(INC_DIR) -c $< -o $@

all: 					$(NAME)

$(NAME):				$(OBJ) Makefile
							$(AR) $@ $^

$(OBJ_DIR):
							@mkdir -p $(OBJ_DIR)
							@echo "$(COLOUR_GREEN)Creating repository 'obj'$(END_COLOUR)"

clean:
							@rm -rf $(OBJ_DIR)
							@echo "$(COLOUR_RED)Deleting repository 'obj'$(END_COLOUR)"

fclean: 				clean
							@$(RM) $(NAME)
							@echo "$(COLOUR_RED)Deleting libftprintf.a$(END_COLOUR)"

re: 					fclean all


.PHONY: 				all bonus clean fclean re