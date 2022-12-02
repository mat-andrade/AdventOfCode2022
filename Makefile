CC = gcc
CFLAGS = -std=c11 -Wall -Werror=format -g -O3

utils.o: utils.h utils.c
	${CC} ${CFLAGS} -c utils.c
day1-1: day1/part1.c utils.o
	${CC} ${CFLAGS} -c day1/part1.c
	${CC} ${CFLAGS} part1.o utils.o -o day1-1
