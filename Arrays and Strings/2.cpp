#include <bits/stdc++.h>
using namespace std;
vector<int> Characters_in_a_string(string str)
{
    vector<int> Characters(256,0);
    for(int i = 0 ; i < str.length() ; ++i )
    {
        ++Characters[str.at(i)];
    }
    return Characters;
}
bool Check_Permutation(string s1,string s2)
{
    /*If the Characters in both the strings equal then we can say that s2
    is the permutation of string s1*/
    vector<int> S1 = Characters_in_a_string(s1);
    vector<int> S2 = Characters_in_a_string(s2);
    for(int i = 0 ; i < S1.size() ; ++i)
    {
        if(S1[i] != S2[i])
        {
            return false;
        }
    }
    return true;
}
int main()
{
    string s1,s2;
    cin>>s1>>s2;
    if(Check_Permutation(s1,s2))
    {
        cout<<s2<<" is a permutation of string "<<s1<<endl;
    }
    else
    {
        cout<<s2<<" is not a permutation of string "<<s1<<endl;
    }
    return 0;
}
