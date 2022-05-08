#include <stdio.h>
#include <stdlib.h>
#include "stack.h"


int main() {
    pStack stack;
    
    initStack(&stack);

    pop(&stack);

    push(&stack, 1);
    push(&stack, 2);
    
    pop(&stack);
    pop(&stack);
    pop(&stack);

    push(&stack, 3);
    push(&stack, 4);

    printf("Size of the stack is %d\n", size(&stack));
    
    push(&stack, 5);
    printStack(&stack);

    pop(&stack);
    pop(&stack);
    printStack(&stack);

    printf("Top: %d\n", top(&stack));
    pop(&stack);
    printf("Top: %d\n", top(&stack));
    printStack(&stack);

    push(&stack, 18);
    push(&stack, 100);
    printStack(&stack);

    freeStack(&stack);

    return 0;
}