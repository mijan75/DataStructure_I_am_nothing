#include "stack1.h"
#include <iostream>

using namespace std;

Stack1::Stack1()
{
    top = -1;
}

void Stack1::push(string data)
{
    top = top + 1;
    arr[top] = data;
}

void Stack1::pop()
{
    top = top - 1;
}

string Stack1::peek()
{
    return arr[top];
}

