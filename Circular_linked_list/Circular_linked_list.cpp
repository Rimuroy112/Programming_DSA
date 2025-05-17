#include<bits/stdc++.h>
using namespace std;

class Node
{
  public:
      int data;
      Node* next;
      Node(int val)
      {
          data = val;
          next = NULL;
      }
};

class Circular_List
{
    Node* head;
    Node* tail;
  public:
      Circular_List()
      {
          head = tail = NULL;
      }

void insertAtHead(int val)
{
    Node* newNode = new Node(val);
    if(head==NULL)
    {
        head=tail=newNode;
        tail->next=head;
    }
    else
    {
        newNode->next = head;
        head = newNode;
        tail->next = head;
    }
}

void insertAtTail(int val)
{
    Node* newNode = new Node(val);
    if(head==NULL)
    {
        head=tail=newNode;
        tail->next=head;
    }
    else
    {
        newNode->next = head;
        tail->next = newNode;
        tail = newNode;
    }
}

void DeleteHead()
{
    if(head==NULL) return;
    else if(head==tail)
    {
        delete head;
        head=tail=NULL;
    }
    else
    {
        Node* temp = head;
        head = head->next;
        tail->next = head;
        temp->next = NULL;
        delete temp;
    }

}

void Deletetail()
{
    if(head==NULL) return;
    else if(head==tail)
    {
        delete head;
        head=tail=NULL;
    }
    else
    {
        Node* temp = tail;
        Node* prev = head;
        while(prev->next != tail)
        {
            prev=prev->next;
        }
        tail = prev;
        tail->next = head;
        temp->next = NULL;
        delete temp;
    }

}


 void printLL()
   {
    if(head==NULL) return;

    cout<<head->data<<"=>";

    Node* temp = head->next;

    while(temp != head)
    {
        cout<<temp -> data<<"=>";
        temp = temp -> next;
    }
    cout<<temp->data;
    cout<<endl;
   }

};



int main()
{
    Circular_List ll;
    ll.insertAtTail(1);
    ll.insertAtTail(2);
    ll.insertAtTail(3);
    ll.Deletetail();


    ll.printLL();


    return 0;
}

