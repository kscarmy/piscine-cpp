NAME =   convert

SRCS = main.cpp \
		ScalarConverter.cpp \
		isSomeThing.cpp \
		char.cpp \
		int.cpp \
		float.cpp \
		double.cpp \

OBJSRCS = $(SRCS:.cpp=.o)

CC = c++

CFLAGS = -Wall -Wextra -Werror -std=c++98

$(NAME): $(OBJSRCS)
	$(CC) $(CFLAGS) $(OBJSRCS) -o $(NAME)

all: $(NAME)

.cpp.o:
	$(CC) $(CFLAGS) -c $<

clean:
	rm -f $(OBJSRCS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all re clean fclean
