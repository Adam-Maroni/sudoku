CC = gcc
FLAGS = -Wall -Werror -Wextra
OUT = rush-1

all:
$(CC) $(FLAGS) -o $(OUT) *.c

test:
$(CC) $(FLAGS) -o $(OUT) *.c
$(OUT) "9...7...." "2...9..53" ".6..124.." "84...1.9." "5.....8.." ".31..4..." "..37..68." ".9..5.741" "47......." | cat -e