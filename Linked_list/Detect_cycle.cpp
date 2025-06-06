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
        head=tail=NULL;

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

    void createCycle(int pos)
    {
        if(head == NULL || pos < 0)
        {
            return;
        }
        Node* temp = head;
        Node* cycleNode = NULL;
        int Count = 0;

        while(temp->next != NULL)
        {
            if(Count == pos)
            {
                cycleNode = head;
            }
            temp = temp->next;
            Count++;
        }
        if(cycleNode!=NULL)
        {
            temp->next= cycleNode;
        }
    }

    bool detect()
    {
        Node* slow=head;
        Node* fast=head;
        while(fast != NULL && fast->next != NULL)
        {
            slow = slow->next;
            fast = fast->next->next;
            if(slow==fast)
            {
                return true;
            }
        }
        return false;
    }
};

int main()
{
    List ll;
    ll.push_front(5);
    ll.push_front(4);
    ll.push_front(3);
    ll.push_front(2);
    ll.push_front(1);
    ll.createCycle(2);
    bool val = ll.detect();
   if(val)
   {
       cout<<"Cycle detected !";
   }
   else
   {
       cout<<"Cycle not detected !";
   }
   return 0;
}
