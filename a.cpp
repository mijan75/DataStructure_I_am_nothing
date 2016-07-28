#include <iostream>
#include <string.h>
#include <stdio.h>
#include <bits/stdc++.h>

using namespace std;

class Stack1{
public:
    string arr[100];
    int top;

    Stack1()
    {
        top = -1;
    }

    void push(string data)
    {
        top = top + 1;
        arr[top] = data;
    }

    void pop()
    {
        top = top - 1;
    }

    string peek()
    {
        return arr[top];
    }
};

int main()
{
    char arr1[100];
    char arr2[100];
    char arr3[100];
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
            for (int j=first; j>second; j--)
            {
                a = a+arr1[j];
            }
            /*
            strcpy(arr2,a.c_str());
            int height = strlen(arr2);

            for (int k=height-1,l=0; k>=0; k--,l++)
            {
                arr3[l] = arr2[k];
            }
            a = string (arr3);
            */
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
    cout <<s.peek();

    return 0;
}
