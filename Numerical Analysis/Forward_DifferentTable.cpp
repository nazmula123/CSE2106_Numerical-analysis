#include<bits/stdc++.h>
using namespace std;
void inter(int n)
{
    float x[20],y[20][20];
    cout<<"Enter the values of x and y:"<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<"x[%d] = "<<i;
        cin>>x[i];
        cout<<"y[%d] = "<<i;
        cin>>y[i][0];
    }
    for(int i=1;i<n;i++)
    {
        for(int j=0;j<n - i;j++)
        {
            y[j][i]=y[j+1][i-1]-y[j][i-1];
        }
    }
    cout<<"FORWARD DIFFERENCE TABLE"<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<x[i];
        for(int j=0;j<=n-i;j++)
        {
            cout<<"    "<<y[i][j];
        }
        cout<<endl;
    }
}
int main()
{
    int n;
    cout<<"Enter the size of the table: "<<endl;
    cin>>n;
    inter(n);
    return 0;
}