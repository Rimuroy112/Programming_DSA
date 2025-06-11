#include<bits/stdc++.h>
using namespace std;

int binarySearch(vector<int> arr1,int target)
{
    int st = 0, End = arr1.size()-1;
    while(st<=End)
    {
        int mid = st +(End-st)/2;
        if(target<arr1[mid])
        {
            End = mid-1;
        }
        else if(target>arr1[mid])
        {
            st = mid+1;
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
    int target = 12;

    cout<<binarySearch(arr1,target);

    return 0;
}
