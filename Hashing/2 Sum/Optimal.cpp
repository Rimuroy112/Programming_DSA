#include<bits/stdc++.h>
using namespace std;

vector<int> twoSum(vector<int> &v,int target)
{
    unordered_map<int,int> m;
    vector<int> v3;

    for(int i=0; i<v.size(); i++)
    {
      int first = v[i];
      int second = target - first;
      if(m.find(second) != m.end())
      {
          v3.push_back(i);
          v3.push_back(m[second]);
          break;
      }
      m[first] = i;
    }
    return v3;
}

int main()
{
    vector<int> v = {5,2,11,7,1,5};
    int target = 9;
    vector<int> v2 = twoSum(v,target);
    for(int x:v2)
    {
        cout<<x<<" ";
    }

    return 0;
}
