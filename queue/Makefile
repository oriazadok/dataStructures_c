CC = gcc
CFLAGS = -g -Wall
OBJECTS_MAIN = main.o
OBJECTS_QUEUE = queue.o

all: queue

queue: $(OBJECTS_MAIN) $(OBJECTS_QUEUE)
	$(CC) $(CFLAGS) -o queue $(OBJECTS_MAIN) $(OBJECTS_QUEUE)

main.o: main.c queue.h
	$(CC) $(CFLAGS) -c main.c

queue.o: queue.c queue.h
	$(CC) $(CFLAGS) -c queue.c

.PHONY: all clean

clean:
	rm -f *.o queue