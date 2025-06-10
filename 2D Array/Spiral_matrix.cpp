#include<bits/stdc++.h>
using namespace std;

vector<int> Spiral(vector<vector<int>> &v)
{
    vector<int> ans;
    int m = v.size(),n = v[0].size();
    int srow = 0,scol = 0, erow = m-1, ecol = n-1;

    while(srow<=erow && scol <= ecol)
    {
        // Top
        for(int j=scol; j<=ecol; j++)
        {
            ans.push_back(v[srow][j]);
        }

        // right
        for(int i=srow+1; i<=erow; i++)
        {
            ans.push_back(v[i][ecol]);
        }
        // bottom
        for(int j=ecol-1; j>=scol; j--)
        {
            if(srow==erow)
            {
                break;
            }
            ans.push_back(v[erow][j]);
        }
        // left
        for(int i=erow-1; i>=srow+1; i--)
        {
            if(scol==ecol)
            {
                break;
            }
            ans.push_back(v[i][scol]);
        }
        srow++;erow--;scol++;ecol--;

    }
    return ans;
}

int main()
{
    vector<vector<int>> v = {{1,2,3,4},{5,6,7,8},{9,10,11,12},{13,14,15,16}};
    vector<int> result = Spiral(v);
    for(auto x:result)
    {
        cout<< x <<endl;
    }

    return 0;
}
