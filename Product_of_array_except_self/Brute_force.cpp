#include<bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> nums = {1,2,3,4};
    int n = nums.size();
    vector<int> ans(n,1);

    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
            if(i != j)
            {
                ans[i] *= nums[j];
            }
        }
    }
   for(int val:ans)
   {
       cout<<val<<" ";
   }
}
