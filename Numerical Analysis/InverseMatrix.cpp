#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cout<<"Enter The row or column of square matrix : "<<endl;
    cin >> n;
    int arr[n][n];
    cout<<"Enter the upper triangular matrix : "<<endl;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n; j++)
        {
            cin >> arr[i][j];
        }
    }
           int   a11 = 1 ,    a22 = 1, a33 =1;
          
           arr[1][2] =  -2*a22;
           arr[2][3] = -2*a33;
           arr[1][3] =-2*a23 - 3*a33;

        cout<<"The inverse matrix : "<<endl;
        for(int i=1;i<=n;i++)
        {
            for(int j=1;j<=n;j++)
            {
                cout<<arr[i][j]<<" ";
            }
            cout<<endl;
        }

    return 0;
}