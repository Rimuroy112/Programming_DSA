#include<bits/stdc++.h>
using namespace std;

class circular_queue
{
    int* arr;
    int currentSize,cap;
    int f,r;
public:
    circular_queue(int Size)
    {
        cap = Size;
        arr = new int[cap];
        currentSize = 0;
        f = 0;
        r = -1;
    }
    void push(int data)
    {
        if(currentSize==cap)
        {
            cout<<"CQ is full";
            return;
        }
      r = (r+1)%cap;
      arr[r] = data;
      currentSize++;
    }
    void pop()
    {
        if(empty())
        {
            cout<<"CQ is full";
            return;
        }
        f = (f+1)%cap;
        currentSize--;
    }
    int front()
    {
         if(empty())
        {
            cout<<"CQ is full";
            return -1;
        }
        return arr[f];
    }
    bool empty()
    {
        return currentSize == 0;
    }

    void print()
    {
        for(int i=0; i<cap; i++)
        {
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }

};

int main()
{
    circular_queue cq(3);
    cq.push(1);
    cq.push(2);
    cq.push(3);
    cq.pop();
    cq.push(4);
    cq.print();

    return 0;
}
