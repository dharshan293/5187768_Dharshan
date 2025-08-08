dependencies
# target name : dependencies
# <tab> coammands to generate target

object.o : main.c sum.c square.c multi.c diff.c div.c
	gcc main.c sum.c square.c multi.c diff.c div.c -c

all: main.o sum.o square.o multi.o diff.o div.o
	gcc main.o sum.o square.o multi.o diff.o div.o -o all.out

run: all
	./all.out

clean: 
	rm -f*.o*.out