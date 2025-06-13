#include<bits/stdc++.h>
using namespace std;

int compress(vector<char> &chars)
{
    int n = chars.size();
    int idx = 0;
    for(int i=0; i<n; i++)
    {
        char ch = chars[i];
        int Count = 0;

        while(i<n && chars[i]==ch)
        {
            Count++; i++;
        }
        if(Count == 1)
        {
            chars[idx++]=ch;
        }
        else
        {
            chars[idx++]=ch;
            string str = to_string(Count);
            for(char dig : str)
            {
                chars[idx++] = dig;
            }
        }
        i--;
    }
    chars.resize(idx);
    return idx;
}

int main()
{
    vector<char> v = {'a','a','b','b','c','c','c'};
    cout<<compress(v)<<endl;

    return 0;

}
