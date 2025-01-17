#Variables
NAME = libftprintf.a
CC = cc
CFLAGS = -Wall -Wextra -Werror 
SRC = ft_printf.c ft_putchar.c \
	ft_puthex.c ft_putnbr.c ft_putstr.c ft_putunsigned.c ft_putptr.c

OBJ = $(SRC:.c=.o)

RM = rm -f
#AR = ar rcs
#Rules
all : $(NAME)

$(NAME): $(OBJ)
	ar rcs $(NAME) $(OBJ)

clean :
	$(RM) $(OBJ)

fclean : clean
	$(RM) $(NAME)

re : fclean all

.PHONY : all clean fclean re
