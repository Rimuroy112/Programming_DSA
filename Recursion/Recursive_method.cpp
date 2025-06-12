#include<bits/stdc++.h>
using namespace std;

int binarySearch(vector<int> arr1,int target,int st,int End)
{

    if(st<=End)
    {
        int mid = st +(End-st)/2;
        if(target<arr1[mid])
        {
           return binarySearch( arr1,target,st, mid-1);
        }
        else if(target>arr1[mid])
        {
          return  binarySearch(arr1,target,mid+1,End);
        }
        else
        {
            return mid;
        }
    }
    return -1;
}

int main()
{
    vector<int> arr1 = {-1,0,3,4,5,9,12};
    int tar = 9;


    cout<<binarySearch(arr1,tar,0,arr1.size()-1);

    return 0;
}

