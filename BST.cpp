#include <iostream>
#include <cstdlib>
#include <stdio.h>

using namespace std;

class Node{
public:
    int data;
    Node *Left;
    Node *Right;

    Node()
    {
        Left = NULL;
        Right = NULL;
    }

    void print()
    {
        cout << data <<" ";
    }
};

class LinkedList{
public:
    Node *root;

    LinkedList()
    {
        root = NULL;
    }

    void addRoot(int data)
    {
        Node *newNode = new Node();
        newNode->data = data;
        newNode->Left = NULL;
        newNode->Right = NULL;
        root = newNode;
    }

    void addElement(Node *head,int a, int b, int c)
    {
        if(head == NULL) return;
        if(head->data == a)
        {
            Node *newNode = new Node();
            newNode->data = c;
            newNode->Left = NULL;
            newNode->Right = NULL;

            if(b == 1)
            {
                head->Left = newNode;
            }

            else
            {
                head->Right = newNode;
            }
        }
        if(head->data>a) addElement(head->Left,a,b,c);
        else addElement(head->Right,a,b,c);
    }

    void preorder(Node *head)
    {
        if(head == NULL) return ;
        cout << head->data << ' ' ;
        preorder(head->Left);
        cout << head->data << ' ' ;
        preorder(head->Right);
        cout << head->data << ' ' ;
    }
};

int main()
{
    freopen("input.txt","r",stdin);
    LinkedList a;
    int Find,LR,Value;
    while(cin>>Find>>LR>>Value)
    {
        if(Find == 0 && LR == 0)
        {
            a.addRoot(Value);
        }

        else
        {
            a.addElement(a.root,Find,LR,Value);
        }
    }
    a.preorder(a.root);
    return 0;
}
