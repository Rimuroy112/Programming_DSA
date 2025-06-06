#include<bits/stdc++.h>
using namespace std;

int PrimeCount(int n)
{
  vector<bool> isPrime(n+1,true);
  int Count = 0;
   for(int i=2; i<n; i++)
   {
       if(isPrime[i])
       {
             Count++;
           for(int j=i*2; j<n; j=j+i)
           {
             isPrime[j] = false;
           }
       }
   }
   return Count;
}

int main()
{
    int n; cin>>n;

    cout<<
    cout<<PrimeCount(n);
    return 0;
}
