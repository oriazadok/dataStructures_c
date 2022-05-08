/**
 * @file stack.h
 * @author oria zadok (oriazadok@gmail.com)
 * @brief This header file represent the structure and functions of the stack data structure
 * @version 0.1
 * @date 2022-05-06
 * 
 * @copyright Copyright (c) 2022
 * 
 */

#define TRUE 1
#define FALSE 0

typedef struct StackNode{
	int data;
	struct StackNode *next;
} StackNode, *pStackNode;

typedef struct Stack {
	pStackNode top;
	int size;
} Stack, *pStack;

/**
 * @brief This function initialize the stack
 * 	return 0 on success 
 * 
 * @param stk 
 * @return int 
 */
int initStack(pStack *stk);

/**
 * @brief This function insert new data to the stack
 * return 0 on success, -1 on error
 * 
 * @param stk 
 * @param data 
 * @return int 
 */
int push(pStack *stk, int data);

/**
 * @brief This function remove the top data from the stack
 * return the removed data on success and -1 if the stack is already empty
 * 
 * @param stk 
 * @return int 
 */
int pop(pStack *stk);

/**
 * @brief This function return the top value in the stack
 * return -1 if the stack is empty 
 * @param stk 
 * @return int 
 */
int top(pStack *stk);

/**
 * @brief This function return the size of the stack
 * 
 * @param stk 
 * @return int 
 */
int size(pStack *stk);

/**
 * @brief This function check if the stack is empty
 * return TRUE=1 for empty and FALSE=0 for non-empty
 * 
 * @param stk 
 * @return int 
 */
int isEmpty(pStack *stk);

/**
 * @brief This function print the stack
 * start with the top and down to the bottom
 * 
 * @param stk 
 * @return int 
 */
int printStack(pStack *stk);

/**
 * @brief This function free the alocated memory for the stack
 * 
 * @param stk 
 * @return int 
 */
int freeStack(pStack *stk);