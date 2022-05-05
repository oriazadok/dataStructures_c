#define TRUE 1
#define FALSE 0

typedef struct Stack {
    int top;
    int size;
    int *arr;
} Stack, *pStack;

int initStack(pStack *stk, int size);

int push(pStack *stk, int data);
int pop(pStack *stk);
int peek(pStack *stk);
int isFull(pStack *stk);
int isEmpyt(pStack *stk);
int printStack(pStack *stk);

int freeStack(pStack *stk);
