#include <bits/stdc++.h>
using namespace std;
string String_compression(string str)
{
    string output = "";
    int check = 0;
    int count = 1;
    for( int i = 1 ; i < str.length() ; ++i )
    {
        if(str[i] != str[i-1])
        {
            string frequency = to_string(count);
            output += str[i-1] + frequency;
            count = 1;
        }
        else
        {
            ++count;
        }
        if(count == 2)
        {
            check = 1;
        }
        if(i == str.length() - 1)
        {
            string frequency = to_string(count);
            output += str[i-1] + frequency;
            count = 1;
        }
    }
    if(check)
    {
        return output;
    }
    else
    {
        return str;
    }
}
int main()
{
    string str;
    cin>>str;
    cout<<"String compression of string "<<str<<" is "<<String_compression(str)<<endl;
    return 0;
}
