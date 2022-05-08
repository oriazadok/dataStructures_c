/**
 * @file linkedList.h
 * @author oria zadok (oriazadok@gmail.com)
 * @brief This header file represent the structure and functions of the linkedList data structure
 * @version 0.1
 * @date 2022-05-07
 * 
 * @copyright Copyright (c) 2022
 * 
 */

#define TRUE 1
#define FALSE 0

typedef struct ListNode {
    int data;
    struct ListNode *next;
} ListNode, *pListNode;

typedef struct Linkedlist {
    pListNode head;
    int size;
} Linkedlist, *pLinkedlist;

/**
 * @brief This function initialize the linkedList
 * 	return 0 on success 
 * 
 * @param list 
 * @return int 
 */
int initLinkedlist(pLinkedlist *list);

/**
 * @brief This function insert new data to the linkedList
 * return 0 on success, -1 on error
 * 
 * @param list 
 * @param data 
 * @return int 
 */
int addNode(pLinkedlist *list, int data);

/**
 * @brief This function remove the data from the linkrdList
 * return the removed data on success
 * return -1 if the linkedList is already empty or data is not in the linkedList
 * 
 * @param list 
 * @param data 
 * @return int 
 */
int removeNode(pLinkedlist *list, int data);

/**
 * @brief This function check if the data in the linkedList
 * return TRUE=1 if contains and FALSE=0 if not contains
 * 
 * @param list 
 * @param data 
 * @return int 
 */
int contains(pLinkedlist *list, int data);

/**
 * @brief This function return the size of the linkedList
 * 
 * @param list 
 * @return int 
 */
int size(pLinkedlist *list);

/**
 * @brief This function check if the linkedlist is empty
 * return TRUE=1 for empty and FALSE=0 for non-empty
 * 
 * @param list 
 * @return int 
 */
int isEmpty(pLinkedlist *list);

/**
 * @brief This function print the linkedList
 * example: head -> ...... -> 
 * 
 * @param list 
 * @return int 
 */
int printList(pLinkedlist *list);

/**
 * @brief This function free the alocated memory for the linkedList
 * 
 * @param list 
 * @return int 
 */
int freeList(pLinkedlist *list);