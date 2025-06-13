#include<bits/stdc++.h>
using namespace std;

bool isAlphaNum(char ch)
{
    return (isdigit(ch) || isalpha(ch));
}

bool valid_palindrome(string &s)
{
    int st = 0, End = s.size()-1;
    while(st<End)
    {
        if(!isAlphaNum(s[st]))
        {
            st++; continue;
        }
        else if(!isAlphaNum(s[End]))
        {
            End--; continue;
        }
        if(tolower(s[st]) != tolower(s[End]))
        {
            return false;
        }
        st++; End--;
    }
    return true;
}

int main()
{
    string s = "madm";

    if(valid_palindrome(s))
    {
        cout<<"yes";
    }
    else
    {
        cout<<"No";
    }
    return 0;
}
