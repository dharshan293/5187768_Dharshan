# target name : dependencies
# <tab> commands to generate target

# Example rule showing $< (first dependency) and $^ (all dependencies)
object_files: main.c sum.c square.c multi.c diff.c div.c
	gcc -c $<           # compiles first dependency (main.c)
	gcc -c $^           # compiles all dependencies into .o files

# gcc main.c -c -> (gcc $< -c)
# gcc main.c sum.c square.c multi.c diff.c div.c -c -> (gcc $^ -c)

# Build the final executable from all object files
all: main.o sum.o square.o multi.o diff.o div.o
	gcc $^ -o all.out   # links all object files into all.out

# Run the executable
run: all
	./all.out

# Clean up build files
clean:
	rm *.o all.out

# Special variables:
# 1. $^: Consider all the files present in the dependencies, separated by space
# 2. $<: Consider only 1st file present in the dependency
