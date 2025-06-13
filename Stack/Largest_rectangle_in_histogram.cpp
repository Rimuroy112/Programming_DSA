#include<bits/stdc++.h>
using namespace std;

int largestRectangle(vector<int> &v)
{
    int n = v.size();
    stack<int> s;
    vector<int> left(n,0);
    vector<int> right(n,0);
    // right smaller
    for(int i=n-1; i>=0; i--)
    {
        while(s.size()>0 && v[s.top()]>=v[i])
        {
            s.pop();
        }
        right[i]= s.empty() ? n :s.top();
        s.push(i);
    }

    while(!s.empty())
    {
        s.pop();
    }

        // left smaller
    for(int i=0; i<n; i++)
    {
        while(s.size()>0 && v[s.top()]>=v[i])
        {
            s.pop();
        }
        left[i]= s.empty() ? -1 :s.top();
        s.push(i);
    }

    int ans = 0;
    for(int i=0; i<n; i++)
    {
        int width = right[i]-left[i]-1;
        int currArea = v[i]*width;
        ans = max(ans,currArea);
    }
    return ans;
}

int main()
{
    vector<int> v = {2,1,5,6,2,3};

    int ans = largestRectangle(v);

    cout<<ans<<endl;

    return 0;
}
