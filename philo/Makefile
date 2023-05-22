SRCS = main.c parsing.c utils.c init.c utils2.c

SRCSB = thread.c

CC = gcc

CFLAGS = -Werror -Wall -Wextra -g -I. -pthread

OBJS = $(SRCS:.c=.o)

NAME = philo

all : ${NAME}

${NAME} : $(OBJS)
	$(CC) ${CFLAGS} $(OBJS) -o ${NAME}  

clean : 
	rm -f ${OBJS}

fclean : clean
	rm -rf ${NAME}
	
re : fclean all

.PHONY : all clean fclean re .c