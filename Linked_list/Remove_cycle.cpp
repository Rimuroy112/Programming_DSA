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

    void createCycle(int pos)
    {
        if(head==NULL || pos<0)
        {
            return;
        }
        Node* temp = head;
        Node* cycleNode = NULL;
        int Count = 0;
        while(temp->next != NULL)
        {
            if(Count==pos)
            {
                cycleNode = temp;
            }
            temp=temp->next;
            Count++;
        }
        if(cycleNode!=NULL)
        {
            temp->next = cycleNode;
        }
    }

    int StartingNode()
    {
        Node* slow = head;
        Node* fast = head;
        bool isCycle = false;
        while(fast != NULL && fast->next != NULL)
        {
            slow = slow->next;
            fast = fast->next->next;
            if(slow==fast)
            {
                isCycle = true;
                break;
            }
        }
        if(!isCycle)
        {
            return -1;
        }
        slow = head;
        Node* prev = NULL;
        while(slow!=fast)
        {
            slow = slow->next;
            prev = fast;
            fast = fast->next;

        }
        if(prev != NULL)
        {
            prev->next = NULL;
        }

        return slow->data;
    }
void printList()
    {
        Node* temp = head;
        while (temp != NULL)
        {
            cout << temp->data << " ";
            temp = temp->next;
        }
        cout << endl;
    }


};

int main()
{
    List LL;
    LL.push_front(5);
    LL.push_front(7);
    LL.push_front(3);
    LL.push_front(2);
    LL.push_front(1);
    LL.createCycle(3);
    int val = LL.StartingNode();
    if(val!=-1)
    {
        cout << "Cycle detected and removed. Starting node of the cycle was: " << val << endl;
    }
    else
    {
        cout << "No cycle detected!" << endl;
    }

    // Print the list to verify that the cycle has been removed
    LL.printList();

    return 0;
}

