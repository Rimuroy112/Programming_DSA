#include<bits/stdc++.h>
using namespace std;

vector<int> nextGreater(vector<int> &v)
{
    int n = v.size();
    stack<int> s;
    vector<int> ans(n,-1);

    for(int i=2*n-1; i>=0; i--)
    {
        while(s.size()>0 && v[s.top()]<=v[i%n])
        {
            s.pop();
        }
        ans[i%n]= s.empty() ? -1 :v[s.top()];
        s.push(i%n);
    }


    return ans;
}

int main()
{
    vector<int> v = {3,6,5,4,2};

    vector<int> ans = nextGreater(v);

  for(int x:ans)
  {
      cout<< x <<" ";
  }

    return 0;
}
