#include<bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> v = {6,3,5,2,7};
    int Count = 0;
    for(int i=0; i<v.size(); i++)
    {
        for(int j=i+1; j<v.size(); j++)
        {
            if(v[i]>v[j])
            {
                Count++;
            }
        }
    }
    cout<<Count<<endl;
    return 0;
}
