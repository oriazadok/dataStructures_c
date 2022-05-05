#include <stdio.h>
#include <stdlib.h>
#include "stack.h"


int main() {

    int size;
    printf("Enter the maximum size of the stack\n");
    scanf("%d", &size);
    pStack stack;
    printf("here\n");
    initStack(&stack, size);

    push(&stack, 1);
    push(&stack, 2);
    push(&stack, 3);
    push(&stack, 4);
    push(&stack, 5);
    printStack(&stack);

    pop(&stack);
    pop(&stack);
    printStack(&stack);

    pop(&stack);
    top(&stack);
    printStack(&stack);

    push(&stack, 18);
    push(&stack, 100);
    printStack(&stack);

    freeStack(&stack);

    return 0;
}