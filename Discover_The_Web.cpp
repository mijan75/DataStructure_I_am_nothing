#include <bits/stdc++.h>
using namespace std;

class Stack{
    public :
    string array[100];
    int top;

    Stack()
    {
        top = -1;
    }

    void push(string link)
    {
        top = top + 1;
        array[top] = link;
    }

    void pop()
    {
        top = top - 1;
    }

    string peek()
    {
        return array[top];
    }

    bool isEmpty()
    {
        return top == -1;
    }

};

int main()

{

    string link;
    string add = "http://www.lightoj.com/";
    int n=0,i=0;
    cin >> n;
    while (n--)
    {
        cout << "Case "<< ++i <<":"<<endl;
        Stack back;
        Stack forward;
        back.push(add);
        while (cin >> link)
        {
            if (link == "VISIT")
            {
                cin >>link;
                back.push(link);
                cout << link <<endl;
                while(!forward.isEmpty())
                {
                    forward.pop();
                }
            }
            else if (link == "BACK")
            {
                if (back.isEmpty())
                {
                    cout << "Ignored" <<endl;
                }
                else
                {

                    if (back.top == 0)
                    {
                        cout << "Ignored" <<endl;
                    }
                    else
                    {
                        forward.push(back.peek());
                        back.pop();
                        cout << back.peek()<<endl;
                    }
                }
            }
            else if(link == "FORWARD")
            {
                if (forward.isEmpty())
                {
                    cout << "Ignored" <<endl;
                }
                else
                {
                    back.push(forward.peek());
                    forward.pop();
                    cout << back.peek()<<endl;
                }
            }
            else if (link == "QUIT")
            {
                break;
            }
        }
    }
    return 0;
}
