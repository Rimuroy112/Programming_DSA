#include<bits/stdc++.h>
using namespace std;

vector<vector<int>> threeSum(vector<int> &v)
{
    set<vector<int>> uniqueTriplets;
    int n = v.size();
    for(int i=0; i<n; i++)
    {
        int target = -v[i];
        set<int> s;
        for(int j=i+1; j<n; j++)
        {
            int third = target - v[j];

            if(s.find(third) != s.end())
            {
               vector<int> trip = {v[i],v[j],third};
               sort(trip.begin(),trip.end());
               uniqueTriplets.insert(trip);
            }

          s.insert(v[j]);
        }
    }
    vector<vector<int>> ans(uniqueTriplets.begin(),uniqueTriplets.end());
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

