#include<bits/stdc++.h>
using namespace std;

void Merge(vector<int> &arr,int st,int mid,int End)
{
    vector<int> temp;
    int i = st, j = mid+1;
    while(i <= mid && j <= End)
    {
        if(arr[i]<arr[j])
        {
            temp.push_back(arr[i]);
            i++;
        }
        else
        {
            temp.push_back(arr[j]);
            j++;
        }
    }

    while(i<=mid)
    {
          temp.push_back(arr[i]);
            i++;
    }
     while(j<=End)
    {
          temp.push_back(arr[j]);
            j++;
    }

    for(int idx=0; idx<temp.size(); idx++)
    {
        arr[idx+st] = temp[idx];
    }
}

void mergeSort(vector<int> &arr,int st,int End)
{
    int mid = st + (End-st)/2;
    if(st<End)
    {
        mergeSort(arr,st,mid);      // Left
        mergeSort(arr,mid+1,End);   // Right
        Merge(arr,st,mid,End);
    }
}

int main()
{
    vector<int> arr = {12,31,35,8,17,32};

    mergeSort(arr,0,arr.size()-1);
    for(int val:arr)
    {
        cout<<val<<" ";
    }
    cout<<endl;
}
