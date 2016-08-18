#include <iostream>
#include <cstdlib>

using namespace std;

class Node
{
public:
    int data;
    Node *p;
    Node *left;
    Node *right;

    Node()
    {
        p = NULL;
        left = NULL;
        right = NULL;
    }

    void print()
    {
        cout << data<<" ";
    }
};

class BST
{
public:
    Node *root;

    BST()
    {
        root = NULL;
    }

    void insertIntoTree(int data)
    {
        Node *newNode = new Node();
        newNode->data = data;

        Node *y = NULL;
        Node *x = root;

        while(x!=NULL)
        {
            y = x;

            if(newNode->data < x->data) x = x->left;
            else x = x->right;
        }

        newNode->p = y;

        if(y == NULL) root = newNode;
        else if(newNode->data < y->data) y->left = newNode;
        else y->right = newNode;
    }

    void inorderPrint(Node *head)
    {
        if(head == NULL) return;
        else
        {
            inorderPrint(head->left);
            head->print();
            inorderPrint(head->right);
        }
    }
    void preorderPrint(Node *head)
    {
        if(head == NULL) return;
        else
        {
            head->print();
            inorderPrint(head->left);
            inorderPrint(head->right);
        }
    }
    void postorderPrint(Node *head)
    {
        if(head == NULL) return;
        else
        {
            inorderPrint(head->left);
            inorderPrint(head->right);
            head->print();
        }
    }
};

int main()
{
    BST b;
    b.insertIntoTree(1);
    b.insertIntoTree(3);
    b.insertIntoTree(7);
    b.insertIntoTree(8);
    b.insertIntoTree(9);
    b.insertIntoTree(10);
    b.insertIntoTree(11);
    b.insertIntoTree(12);
    b.insertIntoTree(5);
    b.insertIntoTree(4);
    b.insertIntoTree(6);
    cout <<"Inorder : ";
    b.inorderPrint(b.root);
    cout << endl;
    cout << "Preorder : ";
    b.preorderPrint(b.root);
    cout << endl;
    cout <<"Postorder : ";
    b.postorderPrint(b.root);
    return 0;
}
