all: core.o main.o functions.exe

# TOO: rename, use a descriptive name that actually means something not inherently obvious about your program 
implementation_of_string_functions: core.o main.o
	g++ core.o main.o -o functions

core: # TOO: Read Makefile documentation, it doesn't look like you understand what rule is.
	g++ -c core.cpp -o core.o

main.o:
	g++ -c main.cpp -o main.o
#       ^~~ TODO: switch to gcc, you Ded's flags


# TOO: also, a note, don't ever add binary files to you git repositories (I mean .exe and such), they
#       are big (slows down git a lot), there's no way to diff them properly (which means it impossible)
#       to merge, rebase and do a whole lot of other important git operations, and they can easily get
#       outdated!
