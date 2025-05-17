#include<bits/stdc++.h>
using namespace std;

int peak_index(vector<int> arr)
{
    int st = 1,End = arr.size()-2;
    while(st<=End)
    {
        int mid = st+(End-st)/2;
        if(arr[mid-1]<arr[mid]&&arr[mid]>arr[mid+1])
        {
            return mid;
        }
        if(arr[mid-1]<arr[mid])
        {
            st = mid+1;
        }
        else
        {
            End = mid-1;
        }
    }

}

int main()
{
    vector<int> arr = {0,3,8,9,5,2};
    cout<<peak_index(arr);
    return 0;
}
