#include "queue.h"

Queue::Queue()
{
    head = -1;
    tail = -1;
    numberOfElement = 0;
}

void Queue:: push(int data)
{
    tail = tail + 1;
    array[tail] = data;
    numberOfElement = numberOfElement + 1;
    tail = tail % 100;
}

int Queue:: pop()
{
    head = head + 1;
    numberOfElement = numberOfElement - 1;
    head = head % 100;
    return array[head];
}
bool Queue:: isEmpty()
{
    if (numberOfElement==0)
    {
        return true;
    }
    else
    {
        return false;
    }
}
int Queue:: peek()
{
    return array[tail];
}


