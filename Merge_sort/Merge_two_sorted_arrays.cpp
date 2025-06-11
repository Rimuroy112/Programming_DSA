#include<bits/stdc++.h>
using namespace std;

void Merge(vector<int> &a,int m,vector<int> &b,int n)
{
    int idx = m+n-1, i = m-1, j = n-1;
    while(i>=0 && j>=0)
    {
        if(a[i]>b[j])
        {
            a[idx--] = a[i--];
        }
        else
        {
            a[idx--] = b[j--];
        }
    }
    while(j>=0)
    {
        a[idx--] = b[j--];
    }
}

int main()
{
    vector<int> a = {1,2,3,0,0,0},b = {2,5,6};
    int m = 3,n = 3;
    Merge(a,m,b,n);
    for(int val:a)
    {
        cout<<val<<" ";
    }
    cout<<endl;

    return 0;
}
