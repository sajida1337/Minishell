
#colors:
GREEN0 = \033[32m
FLUSHING = \033[5m
BLUE = \033[0;34m 
RESET = \033[0m
MEGENTA = \033[1;35m

#Variables:
CFLAGS = -Wall -Wextra -Werror
RM = rm -rf

#Files:
SRC = pwd.c

OBJ = ${SRC:.c=.o}

#library:
NAME = minishell
LIBFT = libft.a

all: $(NAME)

$(LIBFT):
	@echo "$(MEGENTA) Making libft ...👾"
	@make -C libft
	@mv libft/libft.a .

$(NAME) : $(OBJ) $(LIBFT)
	@echo "$(BLUE)Making $(NAME) .. 👾 $(RESET)"
	cc $(CFLAGS)  $(OBJ) -o $(NAME)

clean :
	@echo "$(GREEN0)cleaning ..."
	make -C  libft clean
	$(RM) $(LIBFT) $(OBJ)

fclean: clean
	@echo "$(GREEN0)Full cleaning 👻"
	@echo "$(MEGENTA)Making ... ❄️ "
	$(RM) $(NAME)

re: fclean all

.SILENT: re clean fclean