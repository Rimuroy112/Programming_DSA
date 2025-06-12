#include<bits/stdc++.h>
using namespace std;

int Merge(vector<int> &arr,int st,int mid,int End)
{
    vector<int> temp;
    int i = st, j = mid+1;
    int inversionCount =0;
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
            inversionCount +=(mid-i+1);
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
    return inversionCount;
}

int mergeSort(vector<int> &arr,int st,int End)
{
    int mid = st + (End-st)/2;
    if(st<End)
    {
      int leftCount =  mergeSort(arr,st,mid);      // Left
      int rightCount =  mergeSort(arr,mid+1,End);   // Right
      int inversionCount =  Merge(arr,st,mid,End);
      return leftCount+rightCount+inversionCount;
    }
    return 0;
}

int main()
{
    vector<int> arr = {6,3,5,2,7};

    int ans = mergeSort(arr,0,arr.size()-1);

    cout<<ans;
    return 0;
}

