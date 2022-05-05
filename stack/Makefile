CC = gcc
CFLAGS = -g -Wall
OBJECTS_MAIN = main.o
OBJECTS_STACK = stack.o

all: stack

stack: $(OBJECTS_MAIN) $(OBJECTS_STACK)
	$(CC) $(CFLAGS) -o stack $(OBJECTS_MAIN) $(OBJECTS_STACK)


main.o: main.c stack.h
	$(CC) $(CFLAGS) -c main.c

stack.o: stack.c stack.h
	$(CC) $(CFLAGS) -c stack.c

.PHONY: clean all

clean:
	rm -f *.o *.a *.so stack