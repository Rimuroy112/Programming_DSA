#include<bits/stdc++.h>
using namespace std;

void Sort(vector<int> &arr)
{
    int n = arr.size();
    int Count0 = 0, Count1 = 0, Count2 = 0;
    for(int i=0; i<n; i++)
    {
        if(arr[i]==0)
        {
            Count0++;
        }
        else if(arr[i]==1)
        {
            Count1++;
        }
        if(arr[i]==2)
        {
            Count2++;
        }
    }

    int idx = 0;
    for(int i=0; i<Count0; i++)
    {
        arr[idx++] = 0;
    }
     for(int i=0; i<Count1; i++)
    {
        arr[idx++] = 1;
    }
     for(int i=0; i<Count2; i++)
    {
        arr[idx++] = 2;
    }
}

int Print(vector<int> &arr)
{
    for(int i=0; i<arr.size(); i++)
        cout<<arr[i]<<" ";
}


int main()
{
    vector<int> arr = {2,0,2,1,1,0,1,2,0,0};
    Sort(arr);
    Print(arr);

    return 0;
}
