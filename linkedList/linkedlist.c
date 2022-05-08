#include <stdio.h>
#include <stdlib.h>
#include "linkedList.h"

int initLinkedlist(pLinkedlist *list) {
    (*list)->head = NULL;
    (*list)->size = 0;

    return 0;
}

int addNode(pLinkedlist *list, int data) {

    // create a node for the linkedlist
    ListNode *newNode = (ListNode*)malloc(1 * sizeof(ListNode));
    if(newNode == NULL) {
        printf("Error\n");
        return -1;
    }

    // insert the received data to the new node and set the next pointer to NULL
    newNode->data = data;
    newNode->next = NULL;

    /*
    check if the list is empty so the head will point to the new node
    if not the last node in the linkedlist will point to the new node
    */
    if((*list)->size == 0) {
        (*list)->head = newNode;
    } else {
        pListNode current = (*list)->head;
        while(current->next != NULL) {
            current = current->next;
        }
        current->next = newNode;
    }
    
    printf("adding %d\n", newNode->data);

    // increase the size of the linkedlist
    (*list)->size++;

    return 0;
}

int removeNode(pLinkedlist *list, int data) {
    
    // check if the stack is empty
    if(isEmpty(list)) {
        printf("The LinkedList is already empty\n");
        return -1;
    }

    /*
    if the data is in the head we remove the head
    else we search the linkedlist and then remove the data
    */
    pListNode current = (*list)->head;
    pListNode del = NULL;
    int removed;
    if(current->data == data) {
        del = current;
        removed = del->data;
        current = current->next;
        (*list)->head = current;
        free(del);

        // decrease the size of the linkedlist
        (*list)->size--;

        printf("removing %d\n", removed);
        return removed;
    }
    while(current->next) {
        if(current->next->data == data) {
            del = current->next;
            removed = del->data;
            current->next = current->next->next;
            free(del);

            // decrease the size of the linkedlist
            (*list)->size--;

            printf("removing %d\n", removed);
            return removed;
        }
        current = current->next;
    }
    return -1;
}

int contains(pLinkedlist *list, int data) {
    if(isEmpty(list)) {
        return 1;
    }

    pListNode current = (*list)->head;
    while(current->next != NULL) {
        if(current->next->data == data) {
            return TRUE;
        }
        current = current->next;
    }
    return FALSE;
}

int size(pLinkedlist *list) {
    return (*list)->size;
}

int isEmpty(pLinkedlist *list) {
    if((*list)->size == 0) {
        return TRUE;
    }
    return FALSE;
}

int printList(pLinkedlist *list) {
    printf("LInkedList: ");
    pListNode current = (*list)->head;
    while(current->next) {
        printf("%d -> ", current->data);
        current = current->next;
    }
    printf("%d\n", current->data);

    return 0;
}

int freeList(pLinkedlist *list) {
    pListNode current = (*list)->head;
    while(current) {
        pListNode del = current;
        current = current->next;
        printf("removing %d\n", del->data);
        free(del);
    }
    return 0;
}