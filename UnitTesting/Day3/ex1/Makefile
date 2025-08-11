object.o : leapyear.c unity.c test.c
	gcc $^ -c 

all: test.o leapyear.o unity.o 
	gcc $^ -o $@

run: all
	./all

clean:
	rm -rf *.o all 