#include<bits/stdc++.h>
using namespace std;

int Rotated_sorted_array(vector<int> arr,int target)
{
    int st = 0, End = arr.size()-1;
    while(st<=End)
    {
        int mid = st+(End-st)/2;
        if(target == arr[mid])
        {
            return mid;
        }
        if(arr[st]<=arr[mid])    // Left sorted
        {
           if(arr[st]<= target && target <= arr[mid])
           {
               End = mid-1;
           }
           else
           {
               st = mid+1;
           }
        }
        else              // Right sorted
        {
             if(arr[mid]<= target && target <= arr[End])
           {
               st = mid+1;
           }
           else
           {
               End = mid-1;
           }
        }
    }
    return -1;
}

int main()
{
    vector<int> arr = {4,5,6,7,8,0,1,2,3};
    int target = 2;

    cout<<Rotated_sorted_array(arr,target);

    return 0;
}
