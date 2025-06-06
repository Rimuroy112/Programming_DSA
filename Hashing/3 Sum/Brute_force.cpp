#include<bits/stdc++.h>
using namespace std;

vector<vector<int>> threeSum(vector<int> &v)
{
    vector<vector<int>> ans;
    set<vector<int>> s;
    int n = v.size();
    for(int i=0; i<n; i++)
    {
        for(int j=i+1; j<n; j++)
        {
            for(int k=j+1; k<n; k++)
            {
                if(v[i]+v[j]+v[k]==0)
                {
                    vector<int> trip = {v[i],v[j],v[k]};
                    sort(trip.begin(),trip.end());

                    if(s.find(trip) == s.end())
                    {
                        s.insert(trip);
                        ans.push_back(trip);
                    }
                }
            }
        }
    }
    return ans;
}

int main()
{
    vector<int> v = {-1,0,1,2,-1,-4};
    vector<vector<int>> v2 = threeSum(v);
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
