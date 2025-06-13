#include<iostream>
#include<list>
using namespace std;

class Stack
{
    list<int> ll;
public:
    void push(int val)
    {
       ll.push_front(val);
    }
    void pop()
    {
        ll.pop_front();
    }
    int top()
    {
        return ll.front();
    }
    bool Empty()
    {
        return ll.size()==0;
    }
};

int main()
{
    Stack st;
    st.push(1);
    st.push(2);
    st.push(3);
    while(!st.Empty())
    {
        cout<<st.top()<<"=>";
        st.pop();
    }
    cout<<endl;
}
