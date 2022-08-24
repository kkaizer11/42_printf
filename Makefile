NAME=			libftprintf.a
CC=				gcc
CC_FLAGS=		-Wall -Wextra -Werror
RM=				/bin/rm -f
SRC= 			ft_printf.c writers.c writers2.c 
AR=				ar rcs
LIBFT=			libft/libft.a

all:			$(NAME)

$(NAME):		libft.a $(SRC:.c=.o)
				@$(CC) $(CC_FLAGS) -c $(SRC)
				@$(AR) $(NAME) $(SRC:.c=.o)

libft.a:
				@make -C libft
				@cp $(LIBFT) $(NAME)

clean:
				@make clean -C libft
				$(RM) $(SRC:.c=.o)

fclean:			clean
				$(RM) $(LIBFT) $(NAME)

re: 			fclean all

.PHONY: all clean fclean re libft.a