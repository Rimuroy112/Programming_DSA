#include<bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> nums = {1,2,3,4};
    int n = nums.size();
    vector<int> ans(n,1);
    vector<int> prefix(n,1);
    vector<int> suffix(n,1);

    for(int i=1; i<n; i++)
    {
        prefix[i] = prefix[i-1]*nums[i-1];
    }
     for(int i=n-2; i>=0; i--)
    {
        suffix[i] = suffix[i+1]*nums[i+1];
    }
    for(int i=0; i<n; i++)
    {
        ans[i] = prefix[i]*suffix[i];
    }
    for(int pro:ans)
    {
        cout<<pro<<" ";
    }
}
