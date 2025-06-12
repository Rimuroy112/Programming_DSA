#include<bits/stdc++.h>
using namespace std;

bool isPalindrome(string s)
{
    string s2 = s;
    reverse(s2.begin(),s2.end());
    return s==s2;
}

void getAll(string str,vector<string> &parts,vector<vector<string>> &ans)
{
    if(str.size()==0)
    {
        ans.push_back(parts);
        return;
    }
    for(int i=0; i<str.size(); i++)
    {
        string part = str.substr(0,i+1);
        if(isPalindrome(part))
        {
            parts.push_back(part);
            getAll(str.substr(i+1),parts,ans);
            parts.pop_back();
        }
    }
}

int main()
{

    string str; cin>>str;
    vector<vector<string>> ans;
    vector<string> parts;
    getAll(str,parts,ans);
    for(auto x1:ans)
    {
        for(string x2:x1)
        {
            cout<<x2<<" ";
        }
        cout<<endl;
    }
    return 0;
}
