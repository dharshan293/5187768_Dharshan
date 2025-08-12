object.o : main.c sum.c square.c multi.c diff.c div.c
	gcc $^ -c 

all: main.o sum.o square.o multi.o diff.o div.o
	gcc $^ -o $@

run: all
	./all

clean:
	rm -rf *.o all