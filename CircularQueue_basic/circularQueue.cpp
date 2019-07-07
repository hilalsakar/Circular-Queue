#include "circularQueue.h"

Queue::Queue(int s) {
	front = rear = -1;
	size = s;
	arr = new int[s];
}


void Queue::enQueue(int value) {
	if ((front == 0) && (rear == size-1))
	{
		std::cout << "queue is full" << std::endl;
	}
	else if (front == -1)			// insert first element
	{
		front = rear = 0;
		arr[front] = value;
	}
	else if ((rear == size - 1))	// if dequeue was executed, change first element
	{
		rear = 0;
		arr[rear] = value;
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

	int data = arr[front];
	arr[front] = -1;
	if (front == rear)
	{
		front = -1;
		rear = -1;
	}
	else if (front == size - 1)
		front = 0;
	else
		front++;

	return data;
}

void Queue::printQueue(){

	if (front != -1)			// if queue is not empty,
	{
		int counter = 0;
		for (int i = 0; i <= rear; i++)
		{
			if (arr[i] != -1)
			{
				std::cout << counter << ". element is " << arr[i] << std::endl;
				counter++;
			}
		}

		for (int i = rear+1; i < size; i++)
		{
			if (arr[i] != -1)
			{
				std::cout << counter << ". element is " << arr[i] << std::endl;
				counter++;
			}
		}
	}
	else
		std::cout << "Queue is empty" << std::endl;
}