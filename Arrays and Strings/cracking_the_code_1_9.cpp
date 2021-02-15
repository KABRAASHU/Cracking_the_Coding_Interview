#include <bits/stdc++.h>
using namespace std;
bool is_Substring(string s1, string s2)
{
    if(s1.find(s2) != string::npos)
    {
        return true;
    }
    return false;
}
int main()
{
    string s1,s2,s3;
    cin>>s1>>s2;
    s3 = s1 + s1;
    if(is_Substring(s3,s2))
    {
        cout<<"String "<<s1<<" is a rotation of string "<<s2<<endl;
    }
    else
    {
        cout<<"String "<<s1<<" is nor a rotation of string "<<s2<<endl;
    }
    return 0;
}
