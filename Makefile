all: core main functions

functions: core.o main.o
	gcc core.o main.o -o functions

core: core.c
	gcc -c core.c -o core.o

main: main.c
	gcc -c main.c -o main.o
