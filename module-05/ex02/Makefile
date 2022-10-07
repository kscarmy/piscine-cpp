NAME =   LesDouzesTravauxDAsterix

SRCS = main.cpp \
		Bureaucrat.cpp \
		AForm.cpp \
		PresidentialPardonForm.cpp \
		ShrubberyCreationForm.cpp \
		RobotomyRequestForm.cpp \

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
