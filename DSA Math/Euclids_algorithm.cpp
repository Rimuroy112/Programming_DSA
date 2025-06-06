#include<bits/stdc++.h>
using namespace std;

int Euclid(int n,int m)
{
    while(n>0 && m>0)
    {

        if(n>m)
        {
           n = n%m;
        }
        else
        {
           m = m%n;
        }
    }
   return (n==0) ? m : n;

}

int main()
{
    int n,m; cin>>n>>m;
    cout<<Euclid(n,m);
    return 0;
}
