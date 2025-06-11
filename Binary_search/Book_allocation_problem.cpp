#include<bits/stdc++.h>
using namespace std;

bool isValid(vector<int> &arr,int n,int m,int maxAllowedpages)
{
    int students =1,pages = 0;

    for(int i=0; i<n; i++)
    {
        if(arr[i]>maxAllowedpages)
        {
            return false;
        }
        if(pages + arr[i]<= maxAllowedpages)
        {
            pages += arr[i];
        }
        else
        {
            students++;
            pages = arr[i];
        }
    }
   return students > m ? false : true;
}

int allocate_books(vector<int> &arr,int n,int m)
{
    int sum = 0;
    for(int i=0; i<n; i++)
    {
        sum += arr[i];
    }

    int ans = -1;
    int st = 0, End = sum;

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
    vector<int> arr = {15,17,20};
    int n = 3, m = 2;

    cout<<allocate_books(arr,n,m)<<endl;

    return 0;
}
