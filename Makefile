NAME = push_swap

FLAGS = -Wall -Wextra -Werror

CC = cc 

SRCS = $(shell find src -name "*.c") push_swap.c

OBJS = $(SRCS:.c=.o)

DEPS = $(shell find includes -name "*.h") Makefile

all : $(NAME)

$(NAME) : $(OBJS) $(DEPS)
	$(CC) $(FLAGS) $(OBJS) -o push_swap

%.o:%.c
	$(CC) $(FLAGS) -c $< -o $@

clean : 
	rm -rf $(OBJS) 

fclean : clean
	rm -rf push_swap

re : fclean all

test: $(NAME)
	$(eval ARG = $(shell jot -r 4 0 2000000))
	./push_swap $(ARG)
	@echo -n "Instructions: "
	@./push_swap $(ARG) | wc -l

.PHONY : all re clean fclean