#include<bits/stdc++.h>
using namespace std;

set<vector<int>> s;

void getAllPermutations(vector<int> &v,int idx,int tar,vector<vector<int>> &ans,vector<int> &combin)
{
    if(idx==v.size() || tar < 0)
    {
        return;
    }
    if(tar==0)
    {
        if(s.find(combin)==s.end())
        {
           ans.push_back({combin});
           s.insert(combin);
        }
        return;
    }

    combin.push_back(v[idx]);
    // Single include
    getAllPermutations(v,idx+1,tar-v[idx],ans,combin);
    // multiple include
    getAllPermutations(v,idx,tar-v[idx],ans,combin);
    combin.pop_back();
    getAllPermutations(v,idx+1,tar,ans,combin);
}

int main()
{
    int n,target; cin>>n>>target;
    vector<int> v(n);
    for(int i=0; i<n; i++)
    {

         cin>>v[i];
    }
    vector<vector<int>> ans;
    vector<int> combin;
    getAllPermutations(v,0,target,ans,combin);

    for(auto x:ans)
    {
        for(int x2:x)
        {
            cout<<x2<<" ";
        }
        cout<<endl;
    }
    return 0;

}
