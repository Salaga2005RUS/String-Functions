all: core.o main.o functions.exe

functions.exe: core.o main.o
	gcc core.o main.o -o functions.exe

core.o: core.c
	gcc -c core.c -o core.o

main.o: main.c
	gcc -c main.c -o main.o
