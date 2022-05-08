#include <stdio.h>
#include "queue.h"


int main() {
    pQueue queue;

    initQueue(&queue);

    deQueue(&queue);

    enQueue(&queue, 1);
    enQueue(&queue, 2);

    printf("Size of Queue is %d\n", size(&queue)); 
    
    deQueue(&queue);
    deQueue(&queue);
    deQueue(&queue);

    enQueue(&queue, 3);
    enQueue(&queue, 4);
    enQueue(&queue, 5);
    enQueue(&queue, 6);
    printQueue(queue);

    deQueue(&queue);
    printf("Top: %d\n", peek(&queue));
    deQueue(&queue);
    deQueue(&queue);
    printQueue(queue);

    freeQueue(&queue);

    return 0;
}