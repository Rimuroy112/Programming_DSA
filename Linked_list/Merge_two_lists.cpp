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
            head = tail = newNode;
        }
        else
        {
            newNode->next = head;
            head = newNode;
        }
    }

    Node* getHead()
    {
        return head;
    }

    void setHead(Node* newHead)
    {
        head = newHead;
        // Update the tail if necessary
        if (head == NULL)
        {
            tail = NULL;
        }
        else
        {
            Node* temp = head;
            while (temp->next != NULL)
            {
                temp = temp->next;
            }
            tail = temp;
        }
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

    // Static function to merge two sorted lists
    static Node* mergeTwoLists(Node* head1, Node* head2)
    {
        // Base cases
        if (head1 == NULL) return head2;
        if (head2 == NULL) return head1;

        // Choose the smaller value
        if (head1->data <= head2->data)
        {
            head1->next = mergeTwoLists(head1->next, head2);
            return head1;
        }
        else
        {
            head2->next = mergeTwoLists(head1, head2->next);
            return head2;
        }
    }
};

int main()
{
    List LL1, LL2;
    LL1.push_front(7);
    LL1.push_front(5);
    LL1.push_front(3);
    LL1.push_front(1);

    LL2.push_front(8);
    LL2.push_front(6);
    LL2.push_front(4);
    LL2.push_front(2);

    cout << "List 1: ";
    LL1.printList(); // Output: 1 3 5 7

    cout << "List 2: ";
    LL2.printList(); // Output: 2 4 6 8

    // Merge the two lists
    Node* mergedHead = List::mergeTwoLists(LL1.getHead(), LL2.getHead());

    // Create a new list to hold the merged result
    List mergedList;
    mergedList.setHead(mergedHead);

    cout << "Merged List: ";
    mergedList.printList(); // Output: 1 2 3 4 5 6 7 8

    return 0;
}
