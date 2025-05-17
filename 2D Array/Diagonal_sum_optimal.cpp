#include<bits/stdc++.h>
using namespace std;

int diagonal_sum(int matrix[][4],int n)
{
    int sum = 0;

    for(int i=0; i<n; i++)
    {
       sum += matrix[i][i];
       cout<<sum<<endl;
       if(i != n-1-i)
       {
           sum += matrix[i][n-1-i];
       }
       cout<<sum<<endl;
    }
    return sum;

}

int main()
{
    int matrix[4][4] = {{1,2,3,4},{5,6,7,8},{9,10,11,12},{13,14,15,16}};

    cout<<diagonal_sum(matrix,4);

    return 0;
}

