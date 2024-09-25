CC = cc

CFLAGS = -Wall -Werror -Wextra

NAME = ft_display_file

SOURCES = ft_display_file.c

OBJS = $(SOURCES:%.c=%.o)

.PHONY: all clean fclean re

all : $(NAME)

$(NAME) : $(OBJS)
	$(CC) $(CFLAGS) -g -o $@ $^

%.o : %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean :
	rm -f $(OBJS)

fclean : clean
	rm -f $(NAME)

re : fclean all
