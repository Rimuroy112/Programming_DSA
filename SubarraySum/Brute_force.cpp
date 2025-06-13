#include<bits/stdc++.h>
using namespace std;

int Count(vector<int> &v,int target)
{
    int n = v.size();
    int Count = 0;
    for(int i=0; i<n; i++)
    {
        int sum = 0;
        for(int j=i; j<n; j++)
        {
            sum += v[j];
            if(sum==target)
            {
                Count++;
            }
        }
    }
    return Count;
}

int main()
{
    vector<int> v = {1,2,3};
    int target = 3;
    cout<<Count(v,target);

    return 0;
}
