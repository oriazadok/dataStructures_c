#define TRUE 1
#define FALSE 0

typedef struct Node {
    int  data;
    struct Node *next;
    struct Node *prev;
} Node, *pNode;

typedef struct Queue {
    pNode top;
    pNode tail;
} Queue, *pQueue;

int initQueue(pQueue *q);
int enQueue(pQueue *q, int data);
int deQueue(pQueue *q);
int top(pQueue *q);
int isEmpyt(pQueue *q);
int printQueue(pQueue q);
int freeQueue(pQueue *q);