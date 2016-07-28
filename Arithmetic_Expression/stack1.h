#include <iostream>
using namespace std;

class Stack1{
public:
    string arr[100];
    int top;

    Stack1();
    void push(string data);
    void pop();
    string peek();
};

