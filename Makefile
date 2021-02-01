CC = gcc
FLAGS = -Wall -Werror -Wextra
OUT = rush-1
SRC = $(wildcard *.c)
VERBOSE = | cat -e
#SOLVABLE
EXAMPLE_CASE = "9...7...." "2...9..53" ".6..124.." "84...1.9." "5.....8.." ".31..4..." "..37..68." ".9..5.741" "47......." 
#UNSOLVABLE
UN1 = "9...9...." "2...9..53" ".6..124.." "84...1.9." "5.....8.." ".31..4..." "..37..68." ".9..5.741" "47......." 
#INVALID INPUT

all:
	$(CC) $(FLAGS) -o $(OUT) $(SRC)

example:
	$(CC) $(FLAGS) -g -fsanitize=address -o $(OUT) $(SRC)
	./$(OUT) $(EXAMPLE_CASE)

#DEBUG
gdb:
	$(CC) $(FLAGS) -g -fsanitize=address -o $(OUT) $(SRC)
	gdb --args ./$(OUT) $(EXAMPLE_CASE)

unsolvable:
	$(CC) $(FLAGS) -g -fsanitize=address -o $(OUT) $(SRC)
	./$(OUT) $(UN1)
