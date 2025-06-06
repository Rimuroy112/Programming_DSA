#include<bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> height = {1,8,6,2,5,4,8,3,7};

    int lp = 0, rp = height.size()-1;
    int maxWater = 0;
    while(lp<rp)
    {
        int w = rp - lp;
        int ht = min(height[lp], height[rp]);
        int currWater = w * ht;
        maxWater = max(maxWater,currWater);
        height[lp]<height[rp]?lp++:rp--;

    }
    cout<<maxWater<<endl;

    return 0;
}
