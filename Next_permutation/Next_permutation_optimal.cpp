#include<bits/stdc++.h>
using namespace std;

void nextPermutation(vector<int> &v)
{
    // pivot selection
    int pivot = -1, n = v.size();
    for(int i = n-2; i>=0; i--)
    {
        if(v[i]<v[i+1])
        {
            pivot = i; break;
        }
    }

    if(pivot == -1)
    {
        reverse(v.begin(),v.end());
    }

    // find the rightmost element > pivot
    for(int i = n-1; i>pivot; i--)
    {
        if(v[i]>v[pivot])
        {
            swap(v[i],v[pivot]);
            break;
        }
    }

    // Reverse pivot+1 to n-1

    int i = pivot + 1, j = n-1;
    while(i<=j)
    {
        swap(v[i++],v[j--]);
    }
}

int main()
{
    vector<int> v = {1,2,3,6,5,4};
    nextPermutation(v);
    for(int x : v)
    {
        cout<<x<<' ';
    }
    return 0;
}
