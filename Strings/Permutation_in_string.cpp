#include<bits/stdc++.h>
using namespace std;

bool isFreqsame(int freq1[],int freq2[])
{
    for(int i=0; i<26; i++)
    {
        if(freq1[i] != freq2[i])
        {
            return false;
        }
    }
    return true;
}

bool permutation(string s1, string s2)
{
    int freq[26] = {0};
    for(int i=0; i<s1.length(); i++)
    {
        freq[s1[i]-'a']++;
    }
    int windSize = s1.length();

    for(int i=0; i<s2.length(); i++)
    {
        int windIdx = 0, idx = i;
        int windfreq[26] = {0};
        while(windIdx<windSize && idx<s2.length())
        {
            windfreq[s2[idx]-'a']++;
            windIdx++; idx++;
        }

       if(isFreqsame(freq,windfreq))
       {
           return true;
       }
    }
    return false;
}

int main()
{
    string s1 = "ab",s2 = "eidaboo";
    if(permutation(s1,s2))
    {
        cout<<"yes"<<endl;
    }
    else
    {
        cout<<"No"<<endl;
    }
    return 0;

}
