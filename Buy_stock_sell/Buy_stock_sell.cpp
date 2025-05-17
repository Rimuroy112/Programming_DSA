#include<bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> prices = {7,1,3,5,6,2};
    int maxProfit = 0, bestBuy = prices[0];

       for(int i=1; i<prices.size(); i++)
       {
        if(prices[i]>bestBuy)
        {
            maxProfit = max(maxProfit, prices[i]-bestBuy);
        }
        bestBuy = min(bestBuy, prices[i]);
       }
       cout<<maxProfit<<endl;
}
