#include <stdio.h>
#include <stdlib.h>
#include "queue.h"

int initQueue(pQueue *q) {
    (*q)->top = NULL;
    (*q)->tail = NULL;
    printf("Initialized Successfully\n");

    return 0;
}

int enQueue(pQueue *q, int data) {
    Node *node = (Node*)malloc(sizeof(Node));
    if (node == NULL) {
        printf("ERROR\n");
        return 1;
    }
    
    if(isEmpyt(q) == TRUE) {
        node->data = data;
        (*q)->top = node;
        (*q)->tail = node;
        

        return 0;
    }

    node->data = data;
    node->next = (*q)->tail;
    (*q)->tail->prev = node;
    (*q)->tail = node;

    return 0;
}

int deQueue(pQueue *q) {
    if(isEmpyt(q) == TRUE) {
        printf("The Queue is already empty\n");
        return 0;
    }
    pNode del = (*q)->top;
    (*q)->top = (*q)->top->prev;
    (*q)->top->next = NULL;

    int ans = del->data;
    printf("%d has been removed\n", ans);

    free(del);

    return 0;
}

int top(pQueue *q) {
    printf("%d\n", (*q)->top->data);
    return 0;
}

int isEmpyt(pQueue *q) {
    if((*q)->top == NULL) {
        return TRUE;
    }
    return FALSE;
}

int printQueue(pQueue q) {
    printf("Queue: ");
    pNode p = q->tail;
    while(p != NULL) {
        printf("%d ", p->data);
        p = p->next;
    }
    printf("\n");

    return 0;
}
int freeQueue(pQueue *q) {
    pNode p = (*q)->tail;

    while(p != NULL) {
        pNode del = p;
        p = p->next;
        free(del);
    }
    

    return 0;
}