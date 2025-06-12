#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n; cin>>n;
     //int num = 1;
     char ch = 'A';
    for(int i=0; i<n; i++)
    {


        for(int j=0; j<n; j++)
        {
            cout<<ch<<"   ";
          ch++;
        }
        cout<<'\n';
    }
    return 0;
}
