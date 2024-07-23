FLAGS = -Wall
CC = gcc
NAME = main.c
OUT = termo

all:
	$(CC) $(FLAGS) $(NAME) -o $(OUT)

purge:
	rm -rf $(OUT)
