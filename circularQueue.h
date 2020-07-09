#ifndef CIRCULARQUEUE_H
#define CIRCULARQUEUE_H

#include <iostream>

struct Queue
{
	int front, rear, size;
	int *arr;
	int *headerPtr;

	Queue(int s);

	void enQueue(int value);
	int deQueue();
	void printQueue();
};


#endif // !CIRCULARQUEUE_H
