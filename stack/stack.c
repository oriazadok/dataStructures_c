#include <stdio.h>
#include <stdlib.h>
#include "stack.h"

int initStack(pStack *stk, int size) {
    (*stk)->top = -1;
    (*stk)->size = size;
    (*stk)->arr = (int*)malloc(size * sizeof(int));
    if((*stk)->arr == NULL) {
        printf("Error\n");
        return 1;
    }
    printf("Initialized Successfully\n");
    return 0;
}

int push(pStack *stk, int data) {
    if(isFull(stk) == TRUE) {
        printf("The Stack is full\n");
        return 0;
    }

    (*stk)->top++;
    (*stk)->arr[(*stk)->top] = data;
    
    return 0;
}

int isFull(pStack *stk) {
    if((*stk)->top == (*stk)->size - 1) {
        return TRUE;
    }
    return FALSE;
}

int pop(pStack *stk) {
    int ans  = (*stk)->arr[(*stk)->top];
    (*stk)->top--;
    printf("%d is poped out\n", ans);
    return 0;
}

int top(pStack *stk) {
    return (*stk)->arr[(*stk)->top];
}

int isEmpyt(pStack *stk) {
    if ((*stk)->top == -1) {
        return TRUE;
    }
    return FALSE;
}

int printStack(pStack *stk) {
    int len = (*stk)->top;
    printf("The Stack  data: ");
    for(int i=0; i<=len; i++) {
        printf("%d ", (*stk)->arr[i]);
    }
    printf("\n");

    return 0;
}

int freeStack(pStack *stk) {
    free((*stk)->arr);
    return 0;
}