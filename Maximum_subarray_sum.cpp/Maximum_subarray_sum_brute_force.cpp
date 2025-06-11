#include<bits/stdc++.h>
using namespace std;

int main()
{
    int arr[]={3,-4,5,4,-1,7,-8};
    int n=7;
    int max_sum = INT_MIN;

    for(int st=0; st<n; st++)
    {
        int curr_sum = 0;
        for(int End = st; End<n; End++)
        {
            curr_sum += arr[End];
            max_sum = max(curr_sum,max_sum);
        }
    }
    cout<<max_sum;
    cout<<'\n';

    return 0;
}
