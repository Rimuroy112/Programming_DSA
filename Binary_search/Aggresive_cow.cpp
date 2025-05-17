#include<bits/stdc++.h>
using namespace std;

bool is_possible(vector<int> &arr,int n,int c,int minAllowedDist)
{
    int cows = 1, lastStallPos = arr[0];

    for(int i=1; i<n; i++)
    {
        if(arr[i]-lastStallPos >= minAllowedDist)
        {
            cows++;
            lastStallPos = arr[i];
        }
        if(cows == c)
        {
            return true;
        }
    }
    return false;
}

int AggresiveCow(vector<int> &arr,int n,int c)
{
    sort(arr.begin(),arr.end());
    int st = 1, End = arr[n-1]-arr[0],ans = -1;
    while(st<=End)
    {
        int mid = st+(End-st)/2;
        if(is_possible(arr,n,c,mid))
        {
            ans = mid;
            st = mid + 1;
        }
        else
        {
            End = mid-1;
        }
    }
    return ans;
}

int main()
{
    vector<int> arr = {1,2,8,4,9};
    int n = 5, c = 3;
    cout<<AggresiveCow(arr,n,c);

    return 0;
}
