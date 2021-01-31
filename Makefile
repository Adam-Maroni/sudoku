CC = gcc
FLAGS = -Wall -Werror -Wextra
OUT = rush-1
SRC = $(wildcard *.c)

all:
$(CC) $(FLAGS) -o $(OUT) $(SRC)

test:
$(CC) $(FLAGS) -o -g -fsanitize=address $(OUT) $(SRC)
$(OUT) "9...7...." "2...9..53" ".6..124.." "84...1.9." "5.....8.." ".31..4..." "..37..68." ".9..5.741" "47......." | cat -e #VALID ONE