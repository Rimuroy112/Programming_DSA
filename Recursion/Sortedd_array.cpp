#include<bits/stdc++.h>
using namespace std;

bool isSorted(vector<int> &v,int n)
{
    if(n==0 || n==1) return true;

    return (v[n-1]>v[n-2] && isSorted(v,n-1));
}

int main()
{
    vector<int> v = {1,2,3,4,5};
    cout<<isSorted(v,v.size());

    return 0;
}
