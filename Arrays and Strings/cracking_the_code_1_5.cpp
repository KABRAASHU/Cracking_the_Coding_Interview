#include <bits/stdc++.h>
using namespace std;
bool One_away(string s1,string s2)
{
    if(s1.length() == s2.length())
    {
        int checked = 1;
        for(int i = 0 ; i < s1.length() ; ++i)
        {
            if(s1[i] != s2[i])
            {
                if(checked == 1)
                {
                    checked = 0;
                }
                else
                {
                    return false;
                }
            }
        }
    }
    else if(s1.length() + 1 == s2.length())
    {
        int checked = 0;
        for(int i = 0 ; i < s1.length() ; ++i)
        {
            if(s1[i] != s2[i + checked])
            {
                if(checked == 0)
                {
                    checked = 1;
                }
                else
                {
                    return false;
                }
            }
        }
    }
    else if(s1.length() == s2.length() + 1)
    {
        int checked = 0;
        for(int i = 0 ; i < s2.length() ; ++i)
        {
            if(s1[i + checked] != s2[i])
            {
                if(checked == 0)
                {
                    checked = 1;
                }
                else
                {
                    return false;
                }
            }
        }
    }
    return true;
}
int main()
{
    string s1,s2;
    cin>>s1>>s2;
    if(One_away(s1,s2))
    {
        cout<<s2<<" is One away from the string "<<s1<<endl;
    }
    else
    {
        cout<<s2<<" is not One away from the string "<<s1<<endl;
    }
    return 0;
}
