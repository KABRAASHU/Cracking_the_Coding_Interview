#include <bits/stdc++.h>
using namespace std;
bool Is_Unique(string str)
{
    for(int i = 0 ; i < str.length() ; ++i)
    {
        for(int j = i + 1 ; j < str.length() ; ++j)
        {
            if(str.at(i)==str.at(j))
            {
                return false;
            }
        }
    }
    return true;
}
int main()
{
    string str;
    cin>>str;
    if(Is_Unique(str))
    {
        cout<<str<<" is a unique string"<<endl;
    }
    else
    {
        cout<<str<<" is not a unique string"<<endl;
    }
    return 0;
}
