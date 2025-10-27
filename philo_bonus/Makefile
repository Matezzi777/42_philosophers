#################### COMMANDS ####################
CC = cc
CFLAGS = -Wall -Wextra -Werror
INCLUDES = -I./includes -I/usr/include
NAME = philo_bonus

##################### FILES ######################
RAWS = main.c
SRCS = $(addprefix srcs/, $(RAWS))
OBJS = $(SRCS:.c=.o)

##################### RULES ######################
all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) -o $@

%.o: %.c
	$(CC) $(CFLAGS) $(INCLUDES) -c $< -o $@

fclean: clean
	$(RM) $(NAME)

clean:
	$(RM) $(OBJS)

re: fclean all

.PHONY: all fclean clean re