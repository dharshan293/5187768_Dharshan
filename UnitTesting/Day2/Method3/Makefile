#creating your own variable

SRCS = main.c sum.c square.c multi.c diff.c div.c
OBJS = main.o sum.o square.o multi.o diff.o div.o
object.o: $(SRCS)
	gcc -c
all: $(OBJS)
	gcc $^ -o $@
	
run: all.out
	./all.out

clean:
	rm *.o all.out