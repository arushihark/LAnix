/*
 * LaQueue
 *
 *
 * This is part of a series of labs for the Liberal Arts and Science Academy.
 * The series of labs provides a mockup of an POSIX Operating System
 * referred to as LA(SA)nix or LAnix.
 *
 * (c) copyright 2018, James Shockey - all rights reserved
 *
 * */

#include <iostream>
#include <cstdio>
#include <cstring>
#include <cstdlib>
#include "PQueue.h"



/*
 * Class Priority Queue
 */

/*
* Insert into Priority Queue
*/
void PQueue::push(void *item, int priority) {
	node* newNode = new node;
    newNode->priority = priority;
    newNode->data = item;

    if (front == NULL) {
        front = newNode;
        front->link == NULL;
    } else {
        newNode->link = front;
        front = new node;
    }
}

/*
 * Delete from Priority Queue
 */
void* PQueue::top()
{
	void* poppedData = front->data;

    return poppedData;
}
/*
 * Delete from Priority Queue
 */
void* PQueue::pop()
{
	if (front == NULL) {

    } else {
        void* poppedData = (void*)(front->data);
        //Node* currentTop = pTop->pNext;
        front = front->link;
        return poppedData;
    }
}

/*
 * Print Priority Queue
 */
void PQueue::display()
{
	/* Your code here */

	/* Use the following out command for the data */
	std::cout<<ptr->priority<<" "<<(char*)ptr->data<<std::endl;

}


