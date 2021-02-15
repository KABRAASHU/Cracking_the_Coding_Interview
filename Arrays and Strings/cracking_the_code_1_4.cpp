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
string Palindrome_Permutation(string str)
{
    string output="";
    vector<int> Str = Characters_in_a_string(str);
    if( str.size() & 1)
    {
        int count=0;
        char ch;
        for(int i = 0 ; i < Str.size() ; ++i)
        {
            if(Str[i] & 1)
            {
                if(count == 1)
                {
                    return output;
                }
                count++;
                ch = (char) i;
                Str[i] -= 1;
            }
        }
        output += ch;
        for(int i = 0 ; i < Str.size() ; ++i)
        {
            for(int j = 0 ; j < Str[i]/2 ; ++j)
            {
                ch = (char)i;
                output = ch + output + ch;
            }
        }
        return output;
    }
    else
    {
        char ch;
        for(int i = 0 ; i < Str.size() ; ++i)
        {
            if(Str[i] & 1)
            {
                return output;
            }
        }
        for(int i = 0 ; i < Str.size() ; ++i)
        {
            for(int j = 0 ; j < Str[i]/2 ; ++j)
            {
                ch = (char)i;
                output = ch + output + ch;
            }
        }
        return output;
    }
}
int main()
{
    string str;
    cin>>str;
    string palin = Palindrome_Permutation(str);
    if(palin!="")
    {
        cout<<str<<" is a planidrome permutation of  "<<palin<<endl;
    }
    else
    {
        cout<<str<<" is not a planidrome permutation "<<endl;
    }
    return 0;
}
