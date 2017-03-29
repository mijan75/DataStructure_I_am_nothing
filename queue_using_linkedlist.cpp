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

class Queue{
public:
    Node* head;

    Queue(){
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
        if(head != NULL)
            return head->data;
        else{
            cout << "Queue is Empty" << endl;
        }
    }

    void pop(){
        if(head == NULL)
            cout << "Queue is Empty" << endl;
        else if(head->next == NULL){
            cout << head->data  << " is poped" << endl;
            head = NULL;
        }
        else{
            cout << head->data  << " is poped" << endl;
            head = head->next;

        }
    }

    void print(){
        if(head != NULL){
            for(Node* i = head; i != NULL; i= i->next)
                i->print();
        }

        else{
            cout << "Queue is Empty" << endl;
        }
    }
};

int main(){
    Queue s;
    s.print();
    s.top();
    s.push(10);
    s.push(11);
    s.push(12);
    s.push(13);
    s.pop();
    cout << "The top value of queue is " << s.top() << endl;
    s.print();
    s.pop();
    s.pop();
    cout << "The top value of queue is " << s.top() << endl;
    s.pop();
    s.pop();
    s.pop();
    return 0;
}

