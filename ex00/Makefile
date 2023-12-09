CC=c++
CFLAGS= -std=c++98 -Wall -Werror -Wextra

SRC=megaphone.c
OBJ=megaphone.o
NAME=megaphone

all: $(NAME)

%.o: %.cpp
	$(CC) $(CFLAGS) -c $< -o $@

$(NAME): $(OBJ)
	$(CC) $(CFLAGS) -o $@ $^

clean:
	rm -f $(OBJ)

fclean:
	rm -f $(OBJ) $(NAME)

re: fclean all

.PHONY: clean