#include <stdio.h>
#include <stdlib.h>
#include "linkedList.h"

int main() {

    pLinkedlist list;

    initLinkedlist(&list);

    removeNode(&list, 5);

    addNode(&list, 1);
    addNode(&list, 2);

    removeNode(&list, 2);
    removeNode(&list, 1);
    removeNode(&list, 4);

    addNode(&list, 3);
    addNode(&list, 4);
    addNode(&list, 5);
    addNode(&list, 6);
    printf("%d\n", list->size);
    printList(&list);

    removeNode(&list, 5);
    removeNode(&list, 1);
    printList(&list);
    removeNode(&list, 3);
    addNode(&list, 19);
    printList(&list);

    freeList(&list);

    

    return 0;
}