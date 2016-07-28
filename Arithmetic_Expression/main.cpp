#include <iostream>
#include <cstring>
#include <string.h>
#include <stdio.h>
#include "stack.h"
#include "stack1.h"

using namespace std;

string input;
char convert_input[100];
int length;
int choice;

void infix_to_postfix(char arr[100]);
void infix_to_prefix(char arr[100]);
void postfix_to_infix();
void prefix_to_infix();

int main()
{
    cout << "Enter your choice in numerical value" <<endl <<endl;
    cout << "1. Infix to Postfix" <<endl;
    cout << "2. Infix to Prefix" <<endl;
    cout << "3. Postfix to Infix" <<endl;
    cout << "4. Postfix to Prefix" <<endl;
    cout << "5. Prefix to Infix" <<endl;
    cout << "6. Prefix to Postfix" <<endl <<endl;

    cin >> choice;
    getline(cin,input);

    switch (choice)
    {
        case 1:
            cout << "Enter your infix expression" <<endl;
            getline(cin,input);
            length = input.length();
            strcpy(convert_input,input.c_str());
            infix_to_postfix(convert_input);
            break;
        case 2:
            cout << "Enter your infix expression" <<endl;
            getline(cin,input);
            length = input.length();
            strcpy(convert_input,input.c_str());
            infix_to_prefix(convert_input);
            break;
        case 3:
            cout << "Enter your postfix expression" <<endl;
            postfix_to_infix();
            break;
        case 4:
            cout << "Enter your postfix expression" <<endl;
            postfix_to_infix();
            break;
        case 5:
            cout << "Enter your prefix expression" <<endl;
            prefix_to_infix();
            break;
        case 6:
            cout << "Enter your prefix expression" <<endl;
            prefix_to_infix();
            break;
    }

    return 0;
}

void infix_to_postfix(char arr[100])
{
    Stack s;
    for(int i=0; arr[i]!= '\0'; i++)
    {
        if (arr[i]>='0' && arr[i]<='9')
        {
            s.addToAnswer(arr[i]);
        }

        else if (arr[i] >=65 && arr[i]<=90 || arr[i] >=97 && arr[i] <= 122)
        {
            s.addToAnswer(arr[i]);
        }

        else if (arr[i] == '+' || arr[i] == '-' || arr[i] == '*' || arr[i] == '/')
        {
            if (s.isEmpty())
            {
                s.push(arr[i]);
            }

            else
            {
                if (arr[i] == '+')
                {
                    int limit = s.top;
                    for (int j=0; j<=limit+1; j++)
                    {
                        if (s.peek() == 43 || s.peek() == 42 || s.peek() == 45 || s.peek() == 47)
                        {
                            s.addToAnswer(s.peek());
                            s.pop();
                        }
                        else
                        {
                            s.push(arr[i]);
                            break;
                        }
                    }
                }

                else if(arr[i] == '*')
                {
                    int limit = s.top;
                    for (int j=0; j<=limit+1; j++)
                    {
                        if (s.peek() == 42 || s.peek() == 47)
                        {
                            s.addToAnswer(s.peek());
                            s.pop();
                        }
                        else
                        {
                            s.push(arr[i]);
                            break;
                        }
                    }
                }

                else if(arr[i] == '/')
                {
                    int limit = s.top;
                    for (int j=0; j<=limit+1; j++)
                    {
                        if (s.peek() == 42 || s.peek() == 47)
                        {
                            s.addToAnswer(s.peek());
                            s.pop();
                        }
                        else
                        {
                            s.push(arr[i]);
                            break;
                        }
                    }
                }

                else if (arr[i] == '-')
                {
                    int limit = s.top;
                    for (int j=0; j<=limit+1; j++)
                    {
                        if (s.peek() == 43 || s.peek() == 42 || s.peek() == 45 || s.peek() == 47)
                        {
                            s.addToAnswer(s.peek());
                            s.pop();
                        }
                        else
                        {
                            s.push(arr[i]);
                            break;
                        }
                    }
                }
            }
        }

        else if (arr[i] == '(' || arr[i] == ')')
        {
            if (arr[i] == '(')
            {
                s.push(arr[i]);
            }

            else
            {
                while (1)
                {
                    if (s.peek() == '(')
                    {
                        s.pop();
                        break;
                    }
                    else
                    {
                        s.addToAnswer(s.peek());
                        s.pop();
                    }

                }
            }
        }
    }
    while (!s.isEmpty())
    {
        s.addToAnswer(s.peek());
        s.pop();
    }
    cout << endl;
    cout << "The postfix expression : ";
    s.postfix_print();
    cout <<endl;
};



void infix_to_prefix(char arr[100])
{
    Stack s;
    for (int i=length-1; i>=0; i--)
    {
        if (arr[i]>='0' && arr[i]<='9')
        {
            s.addToAnswer(arr[i]);
        }

        else if (arr[i] >=65 && arr[i]<=90 || arr[i] >=97 && arr[i] <= 122)
        {
            s.addToAnswer(arr[i]);
        }

        else if (arr[i] == '+' || arr[i] == '-' || arr[i] == '*' || arr[i] == '/')
        {
            if (s.isEmpty())
            {
                s.push(arr[i]);
            }

            else
            {
                if (arr[i] == '+')
                {
                    int limit = s.top;
                    for (int j=0; j<=limit+1; j++)
                    {
                        if (s.peek() == 43 || s.peek() == 42 || s.peek() == 45 || s.peek() == 47)
                        {
                            s.addToAnswer(s.peek());
                            s.pop();
                        }
                        else
                        {
                            s.push(arr[i]);
                            break;
                        }
                    }
                }

                else if(arr[i] == '*')
                {
                    int limit = s.top;
                    for (int j=0; j<=limit+1; j++)
                    {
                        if (s.peek() == 42 || s.peek() == 47)
                        {
                            s.addToAnswer(s.peek());
                            s.pop();
                        }
                        else
                        {
                            s.push(arr[i]);
                            break;
                        }
                    }
                }

                else if(arr[i] == '/')
                {
                    int limit = s.top;
                    for (int j=0; j<=limit+1; j++)
                    {
                        if (s.peek() == 42 || s.peek() == 47)
                        {
                            s.addToAnswer(s.peek());
                            s.pop();
                        }
                        else
                        {
                            s.push(arr[i]);
                            break;
                        }
                    }
                }

                else if (arr[i] == '-')
                {
                    int limit = s.top;
                    for (int j=0; j<=limit+1; j++)
                    {
                        if (s.peek() == 43 || s.peek() == 42 || s.peek() == 45 || s.peek() == 47)
                        {
                            s.addToAnswer(s.peek());
                            s.pop();
                        }
                        else
                        {
                            s.push(arr[i]);
                            break;
                        }
                    }
                }
            }
        }

        else if (arr[i] == '(' || arr[i] == ')')
        {
            if (arr[i] == ')')
            {
                s.push(arr[i]);
            }

            else
            {
                while (1)
                {
                    if (s.peek() == ')')
                    {
                        s.pop();
                        break;
                    }
                    else
                    {
                        s.addToAnswer(s.peek());
                        s.pop();
                    }

                }
            }
        }
    }
    while (!s.isEmpty())
    {
        s.addToAnswer(s.peek());
        s.pop();
    }
    cout << endl;
    cout << "The prefix expression : ";
    s.prefix_print();
    cout <<endl;
};


void postfix_to_infix()
{
    char arr1[100];
    string a;
    Stack1 s;
    gets(arr1);
    int lenght = strlen(arr1);
    arr1[lenght] = ' ';
    int first = 0, second = 0;

    for (int i=0; arr1[i] != '\0'; i++)
    {

        if (arr1[i] == ' ')
        {
            second = i;
            a = "";
            for (int j=first; j<second; j++)
            {
                a = a+arr1[j];

            }

            first = second + 1;

            if (arr1[i-1] == '+' || arr1[i-1] == '-' || arr1[i-1] == '*' || arr1[i-1] == '/')
            {
                string b = s.peek();
                s.pop();
                string c = s.peek();
                s.pop();
                string output;
                output = "("+c+a+b+ ")";
                s.push(output);
            }

            else
            {
                s.push(a);
            }
        }
    }
    if (choice == 3)
    {
        cout << "The infix expression : ";
        cout << s.peek() <<endl;
    }

    else
    {
        input = s.peek();
        length = input.length();
        strcpy(convert_input,input.c_str());
        infix_to_prefix(convert_input);
    }
};

void prefix_to_infix()
{
    char arr1[100];
    string a;
    Stack1 s;
    gets(arr1);
    int lenght = strlen(arr1);
    for (int j=lenght; j>0; j--)
    {
        arr1[j] = arr1[j-1];
    }
    arr1[0] = ' ';
    lenght = lenght + 1;

    int first = lenght - 1, second = 0;


    for (int i=lenght-1; i>=0; i--)
    {

        if (arr1[i] == ' ')
        {
            second = i;
            a = "";
            for (int j=second+1; j<=first; j++)
            {
                a = a+arr1[j];
            }

            first = second - 1;

            if (arr1[i+1] == '+' || arr1[i+1] == '-' || arr1[i+1] == '*' || arr1[i+1] == '/')
            {
                string c = s.peek();
                s.pop();
                string b = s.peek();
                s.pop();
                string output;
                output = "("+c+a+b+ ")";
                s.push(output);
            }

            else
            {
                s.push(a);
            }
        }
    }

    if (choice == 5)
    {
        cout <<endl;
        cout << "The infix expression : ";
        cout << s.peek();
        cout <<endl;
    }

    else
    {
        input = s.peek();
        length = input.length();
        strcpy(convert_input,input.c_str());
        infix_to_postfix(convert_input);
    }
};


