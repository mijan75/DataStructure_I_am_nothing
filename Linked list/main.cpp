#include <iostream>
#include <cstdlib>

using namespace std;

class Node{
public:
    int data;
    Node *next;

    Node()
    {
        next = NULL;
    }

    void print()
    {
        cout << data <<endl;
    }
};

class LinkedList{
public:
    static Node *head;

    LinkedList()
    {
        head = NULL;
    }

    void insertIntoFornt(int d)
    {
        Node *newNode = new Node();
        newNode->data = d;
        newNode->next = head;
        head = newNode;
    }

    void insertIntoBottom(int d)
    {
        if (head == NULL)
        {
            Node *newNode = new Node();
            newNode->data = d;
            newNode->next = head;
            head = newNode;
        }
        else
        {
            Node *temp = new Node();
            Node *newNode = new Node();
            temp = head;

            while (temp->next != NULL) temp = temp->next;
            temp->next = newNode;
            newNode->data = d;
            newNode->next = NULL;
        }
    }

    void deleteFromFornt()
    {
        Node *temp = new Node();
        temp = head;
        head = head->next;
        delete(temp);
    }

    void deleteFromBottom()
    {
        Node *temp = new Node();
        Node *bottomNode = new Node();
        temp = head;

        while(temp->next->next != NULL) temp = temp->next;
        bottomNode = temp->next;
        temp->next = NULL;
        delete(bottomNode);
    }

    void Delete(int n)
    {
       Node *current = new Node();
       Node *previous = new Node();

       current = previous = head;
       while( true )
       {
           if (current->data == n)
           {
               if (current == head)
               {
                   head = head->next;
                   current = head;
                   previous = head;
               }
               else
               {
                   previous->next = current->next;
                   //current->next = NULL;
                   current = previous->next;
               }
           }
           else
           {
               if(current->next == NULL) break;
               previous = current;
               current = current->next;
           }
           if (current == NULL) break;
      }

    }

    void Reverse(Node *n = head)
    {
        if(n == NULL) return;
        else Reverse(n->next);

        cout << n->data << " ";

    }

    void print()
    {
        for (Node *i=head; i != NULL; i = i->next)
        {
            i->print();
        }
    }
};

int main()
{
    LinkedList a;

    a.insertIntoBottom(11);
    a.insertIntoBottom(11);
    a.insertIntoBottom(11);
    a.insertIntoBottom(12);
    a.insertIntoBottom(11);
    a.insertIntoBottom(19);
    a.insertIntoBottom(11);
    //a.deleteFromBottom();
    a.Reverse();
    //a.Delete(11);
    //a.print();
    return 0;
}
