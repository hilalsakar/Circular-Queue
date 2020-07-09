#include "circularQueue.h"

Queue::Queue(int s) {
	front = rear = -1;
	size = s;
	arr = new int[s];
}


void Queue::enQueue(int value) {
	
	if (front == -1)			// insert first element
	{
		front = rear = 0;
		arr[front] = value;
	}
	else if ((rear == size - 1))
	{
		std::cout << "queue is full. First element will be deleted." << std::endl;
		headerPtr = new int[size];
		headerPtr = &arr[1];
		headerPtr[rear] = value;
		arr = headerPtr;
	}
	else							// add elements
	{
		rear++;
		arr[rear] = value;
	}

}

int Queue::deQueue() {
	if (front == -1)
	{
		printf("\nQueue is Empty");
		return INT_MIN;
	}
	int data = arr[0];

	headerPtr = new int[size];
	headerPtr = &arr[1];
	arr = new int[size];
	arr = headerPtr;
	rear--;

	return data;
}

void Queue::printQueue(){

	if (front != -1)			// if queue is not empty,
	{
		if (rear < size-1)
		{
			for (int i = 0; i <= rear; i++)
			{
				std::cout << i << ". element is " << arr[i] << std::endl;
			}
		}
		else {
			for (int i = 0; i < size; i++)
			{
				std::cout << i << ". element is " << arr[i] << std::endl;
			}
		}

	}
	else
		std::cout << "Queue is empty" << std::endl;
}