#include<bits/stdc++.h>
using namespace std;

int main()
{
    int x, n;
    cin>>x>>n;
    long binForm = n;
    double ans = 1;

    if(n==0) return 1.0;
    if(x==0) return 0.0;
    if(x==1) return 1.0;
    if(x==-1&& n%2==0) return 1.0;
    if(x==-1&& n%2!=0) return -1.0;

    if( binForm < 0 )
    {
        x = 1/x;
        binForm = - binForm;
    }
    while(binForm > 0)
    {
        if(binForm % 2==1)
        {
            ans *= x;
        }
        x *= x;
        binForm /= 2;
    }
    cout<<ans<<endl;

}
