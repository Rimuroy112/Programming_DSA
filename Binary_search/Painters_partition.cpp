#include<bits/stdc++.h>
using namespace std;

bool isValid(vector<int> &arr,int n,int m,int maxAllowedpages)
{
    int painters =1,time = 0;

    for(int i=0; i<n; i++)
    {

        if(time + arr[i]<= maxAllowedpages)
        {
            time += arr[i];
        }
        else
        {
            painters++;
            time = arr[i];
        }
    }
   return painters<=m;
}

int painters_Partition(vector<int> &arr,int n,int m)
{
    int sum = 0, maxVal = INT_MIN;
    for(int i=0; i<n; i++)
    {
        sum += arr[i];
        maxVal = max(maxVal,arr[i]);
    }

    int ans = -1;
    int st = maxVal, End = sum;

    while(st<=End)
    {
        int mid = st +(End-st)/2;
        if(isValid(arr,n,m,mid))
        {
            ans = mid;
            End = mid-1;
        }
        else
        {
            st = mid+1;
        }
    }
    return ans;
}

int main()
{
    vector<int> arr = {40,30,10,20};
    int n = 4, m = 2;

    cout<<painters_Partition(arr,n,m);

    return 0;
}
