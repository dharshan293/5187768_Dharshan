object.o : test.c def.c unity.c
	gcc $^ -c 

all: test.o def.o unity.o 
	gcc $^ -o $@

run: all
	./all

clean:
	rm -rf *.o all