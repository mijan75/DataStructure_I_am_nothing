#include<bits/stdc++.h>
using namespace std;

class Node{
public:
    int data;
    Node* next;

    Node(){
        next = NULL;
    }

    void print(){
        cout << data << endl;
    }
};

class Stack{
public:
    Node* head;

    Stack(){
        head = NULL;
    }

    void push(int data){
        if(head == NULL){
            Node* newNode = new Node();
            newNode->data = data;
            newNode->next = NULL;
            head = newNode;
        }

        else{
            Node* newNode = new Node();
            Node* temp = new Node();
            temp = head;

            while(temp ->next != NULL) temp = temp->next;
            temp->next = newNode;
            newNode->data = data;
            newNode->next = NULL;

        }
    }

    int top(){
        if(head != NULL){
            Node* temp = new Node();
            temp = head;

            while(temp->next != NULL) temp = temp->next;
            return temp->data;
        }

        else{
            cout << "Stack is Empty" << endl;
        }
    }

    void pop(){
        if(head == NULL)
            cout << "Stack is empty" << endl;
        else if(head->next == NULL){
            cout << head->data << " is popped" << endl;
            head = NULL;
        }

        else{
            Node* temp = new Node();
            Node* temp1 = new Node();
            temp1 = head;
            temp = head;

            while(temp1->next != NULL) temp1 = temp1->next;
            cout << temp1->data << " is popped" << endl;

            while(temp->next->next != NULL) temp = temp->next;
            temp->next = NULL;

        }

    }

    void print(){
        if(head != NULL){
            for(Node* i = head; i != NULL; i= i->next)
            i->print();
        }

        else{
            cout << "Stack is Empty" << endl;
        }
    }
};

int main(){
    Stack s;
    s.print();
    s.top();
    s.push(10);
    s.push(11);
    s.pop();
    s.push(12);
    s.print();
    cout << s.top() << endl;
    s.pop();
    s.pop();
    s.pop();
    s.pop();
    return 0;
}
