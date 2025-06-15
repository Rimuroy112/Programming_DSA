#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    char arr[n+1];
    cin>>arr;
    bool check = 0;
    for(int i=0; i<n; i++)
    {
        if(arr[i] != arr[n-1-i])
        {
            check = 1;
            break;
        }
    }
    if(check == 0)
     cout<<"Word is palindrome";
    else
     cout<<"word is not palindrome";

    return 0;

}
