CC = gcc
CFLAGS = -g -Wall
OBJECTS_MAIN = main.o
OBJECTS_QUEUE = linkedlist.o

all: linkedlist

linkedlist: $(OBJECTS_MAIN) $(OBJECTS_QUEUE)
	$(CC) $(CFLAGS) -o linkedlist $(OBJECTS_MAIN) $(OBJECTS_QUEUE)

main.o: main.c linkedlist.h
	$(CC) $(CFLAGS) -c main.c

linkedlist.o: linkedlist.c linkedlist.h
	$(CC) $(CFLAGS) -c linkedlist.c

.PHONY: all clean

clean:
	rm -f *.o linkedlist