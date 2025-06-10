#include<bits/stdc++.h>
using namespace std;

bool search_in_row(vector<vector<int>> &v,int key,int row)
{
    int n = v[0].size();
    int st = 0, End = n-1;
    while(st<=End)
    {
        int mid = st +(End-st)/2;
        if(key == v[row][mid])
        {
            return true;
        }
        else if(key > v[row][mid])
        {
            st = mid+1;
        }
        else
        {
            End = mid -1;
        }
    }
    return false;
}

bool search_matrix(vector<vector<int>> &v,int key)
{
    int m = v.size(),n = v[0].size();
    int startRow = 0, EndRow = m-1;
    while(startRow<=EndRow)
    {
      int  midRow = startRow + (EndRow-startRow)/2;
        if(key >= v[midRow][0] && key <= v[midRow][n-1])
        {
            return search_in_row(v,key,midRow);
        }
        else if(key >= v[midRow][n-1])
        {
            startRow = midRow + 1;
        }
        else
        {
            EndRow = midRow - 1;
        }
    }
    return false;
}

int main()
{
    vector<vector<int>> v = {{1,3,5,7},{10,11,16,20},{23,30,34,60}};
    int key = 346;
    cout<<search_matrix(v,key);
    return 0;
}
