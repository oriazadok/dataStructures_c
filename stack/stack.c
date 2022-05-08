#include <stdio.h>
#include <stdlib.h>
#include "stack.h"

int initStack(pStack *stk) {
    (*stk)->top = NULL;
    (*stk)->size = 0;
    // printf("Stack Initialized Successfully\n");
    return 0;
}

int push(pStack *stk, int data) {

    // create a node for the stack
    StackNode *node = (StackNode*)malloc(sizeof(StackNode));
    if(node == NULL) {
        printf("ERROR\n");
        return -1;
    }
    // insert the received data to the new node
    node->data = data;

    // set the new top node of the stack to point the current top, 
    //  NULL in case the stack is empty
    if (isEmpty(stk)) {
        node->next = NULL;
    } else {
        node->next = (*stk)->top;
    }

    // set the stack to point to the top new node
    (*stk)->top = node;

    // increase the size of the stack
    (*stk)->size++;
    return 0;
}

int pop(pStack *stk) {

    // check if the stack is empty
    if(isEmpty(stk)) {
        printf("The Stack is already Empty\n");
        return -1;
    }

    // save the top data, remove the top Node of the stack and free the memory
    pStackNode del = (*stk)->top;
    int removed = del->data;
    (*stk)->top = (*stk)->top->next;
    free(del);

    // decrease the size of the stack
    (*stk)->size--;

    printf("%d is poped out\n", removed);
    return 0;
}

int top(pStack *stk) {

    // check if the stack is not empty
    if(isEmpty(stk)) {
        printf("The Stack is already Empty\n");
        return -1;
    }
    
    return (*stk)->top->data;
}

int size(pStack *stk) {
    return (*stk)->size;
}

int isEmpty(pStack *stk) {
    if ((*stk)->size == 0) {
        return TRUE;
    }
    return FALSE;
}

int printStack(pStack *stk) {

    printf("The Stack data\n");
    
    // check if the stack is empty
    if(isEmpty(stk)) {
        printf("There is no data in the stack\n");
    } else {
        pStackNode current = (*stk)->top;
        while(current) {
            printf("%d\n", current->data);
            current = current->next;
        }
    
    }
    printf("End of Stack\n");

    return 0;
}

int freeStack(pStack *stk) {

    while((*stk)->top) {
        pStackNode del = (*stk)->top;
        (*stk)->top = (*stk)->top->next;
        free(del);
    }

    return 0;
}