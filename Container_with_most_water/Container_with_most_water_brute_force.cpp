#include<bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> height = {1,8,6,2,5,4,8,3,7};

    int maxWater = 0;
    for(int i=0; i<height.size(); i++)
    {
        for(int j = i+1; j<height.size(); j++)
        {
            int wid = j-i;
            int ht = min(height[i],height[j]);
            int currWater = ht*wid;
            maxWater = max(maxWater,currWater);
        }
    }
    cout<<maxWater<<endl;

    return 0;
}
