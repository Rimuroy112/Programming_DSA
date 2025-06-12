#include<bits/stdc++.h>
using namespace std;

void DNF(vector<int> &arr)
{
    int low = 0, mid = 0, high = arr.size()-1;
    while(mid<=high)
    {
        if(arr[mid]==0)
        {
            swap(arr[low],arr[mid]);
            low++;
            mid++;
        }
        else if(arr[mid]==1)
        {
            mid++;
        }
        else
        {
            swap(arr[high],arr[mid]);
            high--;
        }
    }
}

int Print(vector<int> &arr)
{
    for(int i=0; i<arr.size(); i++)
    {
        cout<<arr[i];
    }
}

int main()
{
    vector<int> arr = {2,0,2,1,1,0,1,2,0,0};
    DNF(arr);
    Print(arr);

    return 0;
}
