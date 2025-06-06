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

class List
{
    Node* head;
    Node* tail;
  public:
      List()
      {
          head = tail = NULL;
      }

    void push_front(int val)
    {
        Node* newNode = new Node(val);
        if(head==NULL)
        {
            head=tail=newNode;
            return;
        }
        else
        {
            newNode->next = head;
            head = newNode;
        }
    }

int middle()
{
    Node* slow = head;
    Node* fast = head;
    while(fast != NULL && fast->next != NULL)
    {
        slow=slow->next;
        fast=fast->next->next;
    }
    return slow->data;
}


    void printLL()
   {
    Node* temp = head;
    while(temp != NULL)
    {
        cout<<temp -> data<<" ";
        temp = temp -> next;
    }
    cout<<endl;
   }

};



int main()
{
    List ll;
    ll.push_front(6);
    ll.push_front(5);
    ll.push_front(4);
    ll.push_front(3);
    ll.push_front(2);
    ll.push_front(1);
    cout<<"Linked list: ";
    ll.printLL();

    int mid=ll.middle();
    cout<<mid;

    return 0;
}

