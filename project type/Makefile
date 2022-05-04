
SRCS=	srcs/main.c


# SRCS_BONUS=	


NAME=	lol

# NAME_BONUS=	

CFLAGS=	-Werror -Wall -Wextra #-g

CC=	gcc

OBJS=	$(SRCS:.c=.o)

# OBJS_BONUS=	$(SRCS_BONUS:.c=.o)

RM=	rm -f

all:	$(NAME)

bonus:	$(NAME_BONUS)

$(NAME):	$(OBJS)
			make --no-print-directory -C libft
			$(CC) $(CFLAGS) $(OBJS) libft/libft.a -o $(NAME)

# $(NAME_BONUS):	$(OBJS_BONUS)
# 				$(CC) $(CFLAGS) $(OBJS_BONUS) -o $(NAME_BONUS)
clean:
		$(RM) $(OBJS) $(OBJS_BONUS)
fclean:	clean
		make fclean -C libft
		$(RM) $(OBJS) $(NAME) $(NAME_BONUS)
		

re:	fclean all

.PHONY:	fclean clean re all