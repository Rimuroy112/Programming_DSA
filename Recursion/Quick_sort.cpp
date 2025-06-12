#include<bits/stdc++.h>
using namespace std;

int Partition(vector<int> &v,int st,int End)
{
    int idx=st-1,pivot = v[End];
    for(int j=st; j<End; j++)
    {
        if(v[j]<= pivot)
        {
            idx++;
            swap(v[j],v[idx]);
        }
    }

    idx++;
    swap(v[idx],v[End]);
    return idx;
}

void QuickSort(vector<int> &v,int st,int End)
{
    if(st<End)
    {
        int pivIdx = Partition(v,st,End);
        QuickSort(v,st,pivIdx-1);
        QuickSort(v,pivIdx+1,End);
    }
}

int main()
{
    vector<int> v = {5,2,6,4,1,3};

    QuickSort(v,0,v.size()-1);
    for(int val:v)
    {
        cout<<val<<" ";
    }
    return 0;
}
