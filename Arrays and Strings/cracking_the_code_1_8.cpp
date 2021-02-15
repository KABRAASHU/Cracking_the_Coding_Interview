#include <bits/stdc++.h>
using namespace std;
vector<vector<int>> Zero_Matrix(vector<vector<int>> matrix,int n,int m)
{
    vector<vector<int>>new_matrix( n , vector<int> (m, 1));
    for( int i = 0; i < n ; ++i)
    {
        for( int j = 0; j < m ; ++j)
        {
            if(matrix[i][j] == 0)
            {
                for( int k = 0; k < n ; ++k)
                {
                    new_matrix[i][k] = 0;
                }
                for( int k = 0; k < m ; ++k)
                {
                    new_matrix[k][j] = 0;
                }
            }
            else if(new_matrix[i][j] == 1)
            {
                new_matrix[i][j] = matrix[i][j];
            }
        }
    }
    return new_matrix;
}
int main()
{
    int n , m;
    cin>>n>>m;
    vector<vector<int>> matrix( n , vector<int> (m, 0));
    for( int i = 0; i < n ; ++i)
    {
        for( int j = 0; j < m ; ++j)
        {
            cin>>matrix[i][j];
        }
    }
    matrix = Zero_Matrix(matrix,n,m);
    for( int i = 0; i < n ; ++i)
    {
        for( int j = 0; j < m ; ++j)
        {
            cout<<matrix[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}
