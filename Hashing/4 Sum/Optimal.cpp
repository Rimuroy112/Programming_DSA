#include<bits/stdc++.h>
using namespace std;

vector<vector<int>> triplet(vector<int> &v,int tar)
{
    int n = v.size();
    vector<vector<int>> ans;
    sort(v.begin(),v.end());
    for(int i=0; i<n; i++)
    {
        if(i>0 && v[i]==v[i-1]) continue;
       for(int j=i+1; j<n; )
       {
         int p = j+1,q = n-1;

        while(p<q)
        {
         long long sum = (long long)v[i]+(long long)v[j]+(long long)v[p]+(long long)v[q];
         if(sum>tar)
         {
             q--;
         }
         else if(sum<tar)
         {
             p++;
         }
         else
         {
             ans.push_back({v[i],v[j],v[p],v[q]});
             p++;q--;
             while(p<q && v[p]==v[p-1]) p++;
         }
        }

        j++;
        while(j<n && v[j]==v[j-1]) j++;
      }
    }
    return ans;
}

int main()
{
    vector<int> v = {-2,-1,-1,1,1,2,2};
     int tar = 0;
    vector<vector<int>> v2 = triplet(v,tar);

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

