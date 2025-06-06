#include<bits/stdc++.h>
using namespace std;

vector<vector<int>> triplet(vector<int> &v)
{
    int n = v.size();
    vector<vector<int>> ans;
    sort(v.begin(),v.end());
    for(int i=0; i<n; i++)
    {
        if(i>0 && v[i]==v[i-1]) continue;

        int j = i+1,k = n-1;
        while(j<k)
        {
         int sum = v[i]+v[j]+v[k];
         if(sum>0)
         {
             k--;
         }
         else if(sum<0)
         {
             j++;
         }
         else
         {
             ans.push_back({v[i],v[j],v[k]});
             j++;k--;
             while(j<k && v[j]==v[j-1]) j++;
         }
        }
    }
    return ans;
}

int main()
{
    vector<int> v = {-1,0,1,2,-1,-4};
    vector<vector<int>> v2 = triplet(v);

    for(auto x:v2)
    {
        for(auto x1:x)
        {
            cout<<x1<<" ";
        }
        cout<<endl;
    }
    return 0;
}
