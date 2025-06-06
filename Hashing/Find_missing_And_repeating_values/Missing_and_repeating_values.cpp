#include<bits/stdc++.h>
using namespace std;

vector<int> missingAndRepeating(vector<vector<int>> &v)
{
    unordered_set<int> s;
    vector<int> ans;
    int a,b,n = v.size();
    int exp_sum = 0,act_sum = 0;
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
            act_sum += v[i][j];

            if(s.find(v[i][j]) != s.end())
            {
                a = v[i][j];
                ans.push_back(a);
            }
            s.insert(v[i][j]);
        }
    }

    exp_sum = (n*n)*(n*n + 1)/2;
    b = exp_sum+a-act_sum;
    ans.push_back(b);

    return ans;
}

int main()
{
    vector<vector<int>> v = {{9,1,7},{8,9,2},{3,4,6}};
    vector<int> v2 = missingAndRepeating(v);
    for(int x: v2)
    {
        cout<<x<<" ";
    }
    return 0;
}
