class Queue{
    public :
    const static int MAX = 100;
    int array[MAX];
    int head;
    int tail;
    int numberOfElement;

    Queue();
    void push(int data);
    int pop();
    bool isEmpty();
    int peek();

};


