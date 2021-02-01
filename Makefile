CC = gcc
FLAGS = -Wall -Werror -Wextra
OUT = rush-1
SRC = $(wildcard *.c)
EXAMPLE_CASE = "9...7...." "2...9..53" ".6..124.." "84...1.9." "5.....8.." ".31..4..." "..37..68." ".9..5.741" "47......." 
VERBOSE = | cat -e

all:
	$(CC) $(FLAGS) -o $(OUT) $(SRC)

example:
	$(CC) $(FLAGS) -g -fsanitize=address -o $(OUT) $(SRC)
	./$(OUT) $(EXAMPLE_CASE)

gdb:
	$(CC) $(FLAGS) -g -fsanitize=address -o $(OUT) $(SRC)
	gdb --args ./$(OUT) $(EXAMPLE_CASE)