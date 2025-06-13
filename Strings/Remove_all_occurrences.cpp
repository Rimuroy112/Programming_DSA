#include<bits/stdc++.h>
using namespace std;

string RemoveAllOccurence(string s,string part)
{
    while(s.length()>0 && s.find(part)<s.length())
    {
        s.erase(s.find(part),part.length());
    }
    return s;
}

int main()
{
    string s = "daabcbaabcbc",part = "abc";
    cout<<RemoveAllOccurence(s,part);
    return 0;
}
