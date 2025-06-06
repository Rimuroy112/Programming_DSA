#include<bits/stdc++.h>
using namespace std;

vector<int> two_sum(vector<int> &v,int target)
{
    int n = v.size(),sum=0;
    vector<int> v3;
    for(int i=0; i<n; i++)
    {
        int first = v[i];
        for(int j=i+1; j<n; j++)
        {
            int second = v[j];
            sum = first+second;
            if(sum==target)
            {
                v3.push_back(i);
                v3.push_back(j);
            }
        }
    }
    return v3;
}

int main()
{
    vector<int> v = {5,2,11,7,15};
    int target = 9;
    vector<int> v2 = two_sum(v,target);
    for(auto x : v2)
    {
        cout<<x<<" ";
    }
}
