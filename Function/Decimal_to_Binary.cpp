#include<bits/stdc++.h>
using namespace std;

int DecimalToBinary(int decimalN)
{
    int ans = 0, pow = 1;
    while(decimalN > 0)
    {
        int rem = decimalN % 2;
         decimalN /= 2;
         ans += (rem*pow);
         pow *= 10;
    }
    return ans;
}

int BinaryToDecimal(int binNum)
{
    int ans = 0, pow = 1;
    while(binNum>0)
    {
        int rem = binNum % 10;
        binNum /= 10;
        ans += (rem*pow);
        pow *= 2;
    }
    return ans;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n; cin>>n;

    cout<< BinaryToDecimal(1110)<<endl;;
    for(int i=1; i<=n; i++)
    {
        cout<<DecimalToBinary(i)<<'\n';
    }
    return 0;
}
