#include<bits/stdc++.h>
using namespace std;

bool searchMatrix(vector<vector<int>> &v,int target)
{
    int m = v.size(),n = v[0].size();
    int r = 0, c = n-1;
    while(r<=m && c >= 0)
    {
        if(target == v[r][c])
        {
         return true;
        }
        else if(target < v[r][c])
        {
            c--;
        }
        else
        {
            r++;
        }
    }
    return false;
}

int main()
{
    vector<vector<int>> v = {{1,4,7,11,15},{2,5,8,12,19},{3,6,9,16,22},{10,13,14,17,19},{18,21,23,26,30}};
    int target = 52;

    cout<<searchMatrix(v,target);
    return 0;
}
