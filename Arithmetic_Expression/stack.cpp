#include "stack.h"
#include <iostream>
using namespace std;

Stack::Stack ()
{
    top = -1;
    top1 = -1;
}

void Stack::push(char data)
{
    top = top + 1;
    arr[top] = data;
}

void Stack::pop()
{
    top = top - 1;
}

bool Stack::isEmpty()
{
    if (top == -1)
    {
        return true;
    }
    else
    {
        return false;
    }
}

int Stack::peek()
{
    return arr[top];
}

void Stack::addToAnswer(char data)
{
    top1 = top1 + 1;
    arr1[top1] = data;
}

int Stack::answerPeek()
{
    return arr1[top1];
}

void Stack::postfix_print()
{
    for (int i=0; i<=top1; i++)
    {
        cout << arr1[i];
    }
}

void Stack::prefix_print()
{
    for (int i=top1; i>=0; i--)
    {
        cout << arr1[i];
    }
}

