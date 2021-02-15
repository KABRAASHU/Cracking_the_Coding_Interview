#include <bits/stdc++.h>
using namespace std;
string URLify(string str,int n)
{
    string output="";
    int j=0;
    for(int i = 0 ; i < n ; ++i)
    {
        if(str.at(i) == ' ')
        {
            output += str.substr(j,i-j);
            output += "%20";
            j = i+1;
        }
    }
    output += str.substr(j,n-j);
    return output;
}
int main()
{
    string str;
    int n;
    getline(cin,str);
    cin>>n;
    str=URLify(str,n);
    cout<<str<<endl;
    return 0;
}
