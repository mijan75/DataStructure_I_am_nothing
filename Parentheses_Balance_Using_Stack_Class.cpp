#include <iostream>
#include <string.h>
#include <string>
using namespace std;

class Stack{
    char ftack[128];
    int top ;

    public :
    Stack ()
    {
        top = -1;
    }
    void push(char i)
    {
        top = top + 1 ;
        ftack [top] = i;
    }

    void pop()
    {
        top = top - 1;
    }

    int getTop()
    {
        return top;
    }

    bool isEmpty()
    {
        return top == -1;
    }

    int peek()
    {
        return ftack[top];
    }

};

int main()
{
    char String[128];
    string mijan;
    int n = 0;
    cin >>n ;
    getline(cin,mijan);

    int i =0;
    L:
    for (i; i<n ; i++)
    {
        getline(cin,mijan);
        strcpy (String,mijan.c_str());

        int length = strlen(String);
        Stack s;
        int j = 0;
        for (j=0; j<length; j++)
            {

                if (String[j] == '(' || String [j] == '[')
                {
                    s.push(String[j]);
                }
                else if (String[j] == ')' || String[j] == ']')
                {
                    int stack_aschi = s.peek();
                    int string_aschi = String[j];
                    if ((s.getTop() == -1)|| ((stack_aschi != (string_aschi - 1)) && (stack_aschi != (string_aschi - 2))))
                    {
                        cout <<"No" <<endl;
                        i = i+1;
                        goto L;

                    }
                    else
                    {
                        s.pop();
                    }
                }

            }
        if(s.isEmpty())
        {
            cout <<"Yes"<<endl;
        }
        else
        {
            cout <<"No"<<endl;
        }

    }
    return 0;
}




