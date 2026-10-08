#include<bits/stdc++.h>
using namespace std;
class Node {
public :
    int data;
    Node* next;

Node(int val){
    data = val;
    next = NULL;
}
};

class List {
    Node* head;
    Node* tail;

public :
List(){
    head = NULL;
    tail = NULL;
}

void push_front(int val){
    Node* newNode = new Node(val);
    if(head == NULL){
        head = tail = newNode;
        return;
    }else {
        newNode->next = head;
        head = newNode;
    }
}

void push_back(int val){
    Node* newNode = new Node(val);
    if(head == NULL){
        head = tail = newNode;
        return;
    }else {
        tail->next = newNode;
        tail = newNode;
    }
}

void print(){
    Node* temp = head;
    while(temp != NULL){
        cout<<temp->data<<"->";
        temp = temp->next;
    }
    cout<<"NULL"<<endl;
}

void pop_front(){
    if(head == NULL){
        cout<<"Linked List is Empty"<<endl;
        return;
    }
    else{
        Node* temp = head;
        head = head->next;
        temp->next = NULL;
        delete temp;
    }
}

void pop_back(){
    if(head == NULL){
        cout<<"Linked List is Empty"<<endl;
        return;
    }
    else{
       Node* temp = head;
       while(temp->next != tail){
        temp = temp->next;
       }
       temp->next = NULL;
       delete tail;
       tail = temp;
    }
}

void insert(int val,int pos){
    if(pos < 0){
        return;
    }
    if(pos = 0){
        push_front(val);
        return;
    }
        Node* newNode = new Node(val);
        Node* temp = head;
        for(int i = 0;i < pos;i++){
            if(temp->next = NULL){
                cout<<"Invalid position"<<endl;
                return;
            }
            temp = temp-> next;
        }
        newNode->next = temp->next;
        temp->next = newNode;
}

int search(int val){
    Node* temp = head;
    int idx = 0;
    while(temp != NULL){
        if(temp->data == val){
            return idx;
        }
        else{
            temp = temp->next;
            idx++;
        }
    }
    return -1;
}
};

int main(){
    List ll;
    ll.push_front(1);
    ll.push_front(2);
    ll.push_front(3);
    ll.print();
    cout<<ll.search(8)<<endl;

}