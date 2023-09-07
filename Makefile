all: core main functions

# TODO: rename, use a descriptive name that actually means something not inherently obvious about your program 
functions: core.o main.o
	gcc core.o main.o -o functions

core: core.c # TODO: Read Makefile documentation, it doesn't look like you understand what rule is.
	gcc -c core.c -o core.o

main: main.c
	gcc -c main.c -o main.o
#       ^~~ TODO: switch to gcc, you Ded's flags


# TODO: also, a note, don't ever add binary files to you git repositories (I mean .exe and such), they
#       are big (slows down git a lot), there's no way to diff them properly (which means it impossible)
#       to merge, rebase and do a whole lot of other important git operations, and they can easily get
#       outdated!
