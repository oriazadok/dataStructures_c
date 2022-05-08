#include <stdio.h>
#include <stdlib.h>
#include "queue.h"

int initQueue(pQueue *q) {
    (*q)->top = NULL;
    (*q)->tail = NULL;
    (*q)->size = 0;
    printf("Initialized Successfully\n");
    return 0;
}

int enQueue(pQueue *q, int data) {

    // create a node for the queue
    QueueNode *node = (QueueNode*)malloc(sizeof(QueueNode));
    if (node == NULL) {
        printf("ERROR\n");
        return -1;
    }
    
    // insert the received data to the new node
    node->data = data;

    /*
    set the new tail node of the queue
    if the queue is empty the new tail will be also the head
    if the queue is not empty the new node will point to the current tail
    and the current tail will point to the new node
    */
    if(isEmpyt(q)) {
        node->next = NULL;
        (*q)->top = node;
        
    } else {
        node->next = (*q)->tail;
        (*q)->tail->prev = node;
    }
    node->prev = NULL;
    
    // set the tail of the queue to point to the tail new node
    (*q)->tail = node;

    // increase the size of the stack
    (*q)->size++;

    return 0;
}

int deQueue(pQueue *q) {

    // check if the queue is not empty
    if(isEmpyt(q)) {
        printf("The Queue is already empty\n");
        return -1;
    }

    // save the top data, remove the top Node of the queue and free the memory
    pQueueNode del = (*q)->top;

    // check it there is one node in the queue
    if(size(q) == 1) {
        (*q)->top = NULL;
        (*q)->tail = NULL;
    } else {
        (*q)->top = (*q)->top->prev;
        (*q)->top->next = NULL;
    }
    
    int removed = del->data;
    printf("%d has been removed\n", removed);

    // free the allocated memory
    free(del);

    // decrease the size of the queue
    (*q)->size--;

    return 0;
}

int peek(pQueue *q) {

    // check if the queue is empty
    if(isEmpyt(q)) {
        printf("The Queue is already empty\n");
        return -1;
    }

    return(*q)->top->data;
}

int size(pQueue *q) {
    return (*q)->size;
}

int isEmpyt(pQueue *q) {
    if((*q)->size == 0) {
        return TRUE;
    }
    return FALSE;
}

int printQueue(pQueue q) {
    printf("Queue: ");
    pQueueNode current = q->tail;
    while(current->next) {
        printf("%d -> ", current->data);
        current = current->next;
    }
    printf("%d\n", current->data);

    return 0;
}

int freeQueue(pQueue *q) {
    
    pQueueNode current = (*q)->tail;
    while(current) {
        pQueueNode del = current;
        current = current->next;
        free(del);
    }
    return 0;
}