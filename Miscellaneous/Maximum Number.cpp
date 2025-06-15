#include<iostream>
using namespace std;
int main()
{
    int n;
    int maximum = 0;
    cin>>n;
    for(int i=0; i<n; i++)
    {
       int x; cin>>x;
       maximum = max(maximum,x);
    }
    cout<<maximum<<endl;
}
