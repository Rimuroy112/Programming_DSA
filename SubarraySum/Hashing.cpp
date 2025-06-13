#include<bits/stdc++.h>
using namespace std;

int Count(vector<int> &v,int target)
{
    int n = v.size(),Count = 0;
    vector<int> prefixSum(n,0);
    prefixSum[0] = v[0];
    for(int i=1; i<n; i++)
    {
        prefixSum[i] = prefixSum[i-1]+v[i];
    }

    unordered_map<int,int> m;

    for(int j=0; j<n; j++)
    {
        if(prefixSum[j]==target) Count++;
        int val = prefixSum[j]-target;

        if(m.find(val) != m.end())
        {
            Count += m[val];
        }
        if(m.find(prefixSum[j]) == m.end())
        {
            m[prefixSum[j]] = 0;
        }
        m[prefixSum[j]]++;
    }

    return Count;
}
int main()
{
    vector<int> v = {9,4,20,3,10,5};
    int target = 33;
    cout<<Count(v,target);
    return 0;
}
