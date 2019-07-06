#include "circularQueue.h"


int main(void) {
	int size;
	std::cout << "assign the size: ";
	std::cin >> size;
	Queue queue(size);

	for (int i = 0; i < 45; i++)
	{
		if (i > size - 1)
		{
			std::cout << "\nException Handling Result: First element " << queue.deQueue() << " is deleted.\n";
		}
		queue.enQueue(i);
	}
	queue.printQueue();

	system("pause");

}