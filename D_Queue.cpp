#include <bits/stdc++.h>
using namespace std;

class Queue{
public:
    const static int MAX = 100;
    int arr[MAX];
    int head;
    int tail;
    int bottom_pop;
    int font_push;
    int numberOfElement;

    Queue ()
    {
        head = -1;
        tail = -1;
        numberOfElement = 0;
        bottom_pop = -1;
        font_push = 0;
    }

    void push_font(int data)
    {
        if (numberOfElement != 0)
        {
            for (int i=numberOfElement; i>0; i--)
            {
                arr[i] = arr[i-1];
            }
            tail = tail + 1;
            bottom_pop = bottom_pop + 1;
            arr[font_push] = data;
            cout << arr[font_push] <<endl;
            numberOfElement = numberOfElement + 1;
        }
        else
        {
            tail = tail + 1;
            bottom_pop = bottom_pop + 1;
            arr[font_push] = data;
            cout << arr[font_push] <<endl;
            numberOfElement = numberOfElement + 1;
        }
    }

    void push_bottom(int data)
    {
        tail = tail + 1;
        bottom_pop = bottom_pop + 1;
        arr[tail] = data;
        cout << arr[tail] <<endl;
        numberOfElement = numberOfElement + 1;
    }

    void pop_font()
    {
        if (numberOfElement != 0)
        {
             head = head + 1;
             cout << arr[head] <<endl;
             numberOfElement = numberOfElement - 1;
        }
    }

    void pop_bottom()
    {
        if (numberOfElement != 0)
        {
            cout << arr[bottom_pop] <<endl;
            bottom_pop = bottom_pop - 1;
            tail = tail - 1;
            numberOfElement = numberOfElement - 1;
        }
    }

    bool isEmpty()
    {
        return numberOfElement;
    }

    int peek()
    {
        return arr[tail];
    }
    void print()
    {
        for (int i=0; i<numberOfElement; i++)
        {
            cout << arr[i] <<endl;
        }
    }
};

int main()
{
    Queue q ;
    q.push_bottom(10);
    q.push_font(20);
    cout <<endl;
    q.print();
    cout<<endl;
    q.pop_bottom();
    q.pop_font();
    return 0;
}
