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

void reverseList() {
      Node* prev = NULL;
      Node* curr = head;
      Node* next = NULL;
      while(curr != NULL)
      {
        next = curr -> next;
        curr -> next = prev;
        prev = curr;
        curr = next;
      }
      tail = head;
      head = prev;

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
    ll.push_front(3);
    ll.push_front(2);
    ll.push_front(1);


    cout << "Original List: ";
    ll.printLL();

    // Reverse the list
    ll.reverseList();

    cout << "Reversed List: ";
    ll.printLL();

    return 0;
}
