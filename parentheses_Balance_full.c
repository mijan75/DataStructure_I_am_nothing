#include <stdio.h>
#include <string.h>
#include <stdbool.h>

char string[128];
char stack[128];

bool isBanlance(char string [],int n);
void push(int i);
void pop();
int top = -1;

int main()

{
    int n = 0,i=0;
    scanf("%d ",&n);
    for (i=0; i<n; i++)
    {
        gets(string);
        int length = strlen(string);
        if (isBanlance(string,length))
        {
            printf("Yes\n");
        }
        else
        {
            printf("No\n");
        }
    }
}

bool isBanlance(char string [],int n)
{
    top = -1;
    int j = 0;
    for (j=0; j<n;j++)
        {
            if (string[j] == '(' || string[j] == '[' || string[j] == '{')
            {
                push(j);
            }
            else if (string[j] == ')' || string[j] == ']' || string[j] == '}')
            {
                int stack_aschi = stack[top];
                int string_aschi = string[j];
                if ((top == -1)|| ((stack_aschi != (string_aschi - 1)) && (stack_aschi != (string_aschi - 2))))
                {
                    return false;

                }
                else
                {
                    pop();
                }
            }
        }
        if (top == -1)
        {
            return true;
        }
        else
        {
            return false;
        }
}

void push(int i)
{
    top = top + 1;
    stack[top] = string[i];
}

void pop()
{
    top = top - 1;
}
