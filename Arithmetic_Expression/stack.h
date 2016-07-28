class Stack
{
public:
    const static int MAX = 100;
    const static int MAX1 = 100;
    char arr[MAX];
    char arr1[MAX1];
    int top;
    int top1;

    Stack ();
    void push(char data);
    void pop();
    bool isEmpty();
    int peek();
    void addToAnswer(char data);
    int answerPeek();
    void postfix_print();
    void prefix_print();

};

