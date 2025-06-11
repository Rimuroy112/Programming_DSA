#include<bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> nums = {1,2,2,1,1};
    int n = nums.size();
    int freq = 1, ans = nums[0];

    for(int i=1; i<n; i++)
    {
        if(nums[i]==nums[i-1])
        {
            freq++;
        }
        else
        {
            freq = 1;
            ans = nums[i];
        }
    }
  cout<<ans;
}
