/**
 * @file queue.h
 * @author oria zadok (oriazadok@gmail.com)
 * @brief This header file represent the structure and functions of the queue data structure
 * @version 0.1
 * @date 2022-05-07
 * 
 * @copyright Copyright (c) 2022
 * 
 */

#define TRUE 1
#define FALSE 0

typedef struct QueueNode {
    int  data;
    struct QueueNode *next;
    struct QueueNode *prev;
} QueueNode, *pQueueNode;

typedef struct Queue {
    pQueueNode top;
    pQueueNode tail;
    int size;
} Queue, *pQueue;

/**
 * @brief This function initialize the queue
 * 	return 0 on success 
 * 
 * @param q 
 * @return int 
 */
int initQueue(pQueue *q);

/**
 * @brief This function insert new data to the queue
 * return 0 on success, -1 on error
 * 
 * @param q 
 * @param data 
 * @return int 
 */
int enQueue(pQueue *q, int data);

/**
 * @brief This function remove the top data from the queue
 * return the removed data on success and -1 if the queue is already empty
 * 
 * @param q 
 * @return int 
 */
int deQueue(pQueue *q);

/**
 * @brief This function return the top value in the queue
 * return -1 if the queue is empty
 * @param q 
 * @return int 
 */
int peek(pQueue *q);

/**
 * @brief This function return the size of the queue
 * 
 * @param q 
 * @return int 
 */
int size(pQueue *q);

/**
 * @brief This function check if the queue is empty
 * return TRUE=1 for empty and FALSE=0 for non-empty
 * 
 * @param q 
 * @return int 
 */
int isEmpyt(pQueue *q);

/**
 * @brief This function print the queue
 * start with the tail and end with the top
 * example: tail -> ...... -> top
 * 
 * @param q 
 * @return int 
 */
int printQueue(pQueue q);

/**
 * @brief This function free the alocated memory for the queue
 * 
 * @param q 
 * @return int 
 */
int freeQueue(pQueue *q);