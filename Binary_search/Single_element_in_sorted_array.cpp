#include<bits/stdc++.h>
using namespace std;

int single_element(vector<int> A)
{
    int n = A.size();
    if(n==1) return A[0];
    int st = 0, End = n-1;
    while(st<=End)
    {
        int mid = st+(End-st)/2;
        if(mid == 0 && A[0] != A[1]) return A[mid];
        if(mid == n-1 && A[n-1] != A[n-2]) return A[mid];

        if(A[mid-1] != A[mid] && A[mid] != A[mid+1]) return A[mid];
        if(mid % 2==0)
        {
            if(A[mid-1]== A[mid])
            {
                End = mid-1;
            }
            else
            {
                st = mid+1;
            }
        }
        else
        {
             if(A[mid-1]== A[mid])
            {
                st = mid+1;
            }
            else
            {
                End = mid-1;
            }
        }

    }
    return -1;
}

int main()
{
    vector<int> A = {1,1,3,3,4,4,2,8,8};
    cout<<single_element(A);

    return 0;
}
