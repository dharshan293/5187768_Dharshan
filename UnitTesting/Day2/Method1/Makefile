# target name : dependencies
# <tab> commands to generate target

object.o : main.c sum.c square.c multi.c diff.c div.c
	gcc -c main.c
	gcc -c sum.c
	gcc -c square.c
	gcc -c multi.c
	gcc -c diff.c
	gcc -c div.c

all: main.o sum.o square.o multi.o diff.o div.o
	gcc $^ -o all.out

run: all
	./all.out

clean: 
	rm -f *.o all.out

# Special variables:
# 1. $^: all files in dependencies, separated by space
# 2. $<: only the first file in the dependency list
