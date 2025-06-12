#include<iostream>
#include<vector>
using namespace std;

void getPermutation(vector<int> &v,int idx,vector<vector<int>> &ans)
{
    if(idx==v.size())
    {
        ans.push_back(v);
        return;
    }

    for(int i=idx; i<v.size(); i++)
    {
        swap(v[idx],v[i]);
        getPermutation(v,idx+1,ans);
        swap(v[idx],v[i]);  // backtracking
    }
}

int main()
{
    vector<int> v = {1,2,3};
    vector<vector<int>> ans;
    getPermutation(v,0,ans);

    for(auto x:ans)
    {
        for(auto x2: x)
        {
            cout<<x2<<" ";
        }
        cout<<endl;
    }
    return 0;
}
