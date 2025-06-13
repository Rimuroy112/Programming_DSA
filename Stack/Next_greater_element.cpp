#include<iostream>
#include<vector>
#include<stack>
using namespace std;

int main()
{
    vector<int> price = {6,8,0,1,3};

    vector<int> ans(price.size(),0);
    stack<int> s;

    for(int i=price.size()-1; i>=0; i--)
    {
      while(s.size()>0 && s.top()<=price[i])
        {
        s.pop();
        }
    if(s.empty())
    {
        ans[i] = -1;
    }
    else
    {
        ans[i] = s.top();
    }
    s.push(price[i]);
  }

  for(int val: ans)
  {
      cout<<val<<" ";
  }
  return 0;

}

