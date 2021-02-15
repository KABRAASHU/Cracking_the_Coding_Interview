#include <bits/stdc++.h>
using namespace std;
vector<vector<int>> Rotate_Matrix(vector<vector<int>> image,int n)
{
    vector<vector<int>>rotated_image( n , vector<int> (n, 0));
    for( int i = 0; i < n ; ++i)
    {
        for( int j = 0; j < n ; ++j)
        {
            rotated_image[i][j] = image[n-j-1][i];
        }
    }
    return rotated_image;
}
int main()
{
    int n;
    cin>>n;
    vector<vector<int>> image( n , vector<int> (n, 0));
    for( int i = 0; i < n ; ++i)
    {
        for( int j = 0; j < n ; ++j)
        {
            cin>>image[i][j];
        }
    }
    image = Rotate_Matrix(image,n);
    for( int i = 0; i < n ; ++i)
    {
        for( int j = 0; j < n ; ++j)
        {
            cout<<image[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}
