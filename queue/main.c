#include <stdio.h>
#include "queue.h"


int main() {
    pQueue queue;

    initQueue(&queue);
    enQueue(&queue, 1);
    enQueue(&queue, 2);
    enQueue(&queue, 3);
    enQueue(&queue, 4);
    enQueue(&queue, 5);
    enQueue(&queue, 6);
    printQueue(queue);

    deQueue(&queue);
    top(&queue);
    deQueue(&queue);
    deQueue(&queue);
    printQueue(queue);

    freeQueue(&queue);

    return 0;
}