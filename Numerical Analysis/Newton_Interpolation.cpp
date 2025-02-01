#include<bits/stdc++.h>
using namespace std;
void inter(int n,float k)
{
    float x[20],y[20][20];
    cout<<"Enter the values of x: "<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<"x[%d]= "<<i;
        cin>>x[i];
        cout<<"Enter the value of y"<<endl;
        cin>>y[i][0];
    }
    for(int i=1;i<n;i++)
    {
        for(int j=0;j<n-i;j++)
        {
            y[j][i]=y[j+1][i-1]-y[j][i-1];
        }
    }
    cout<<"FORWARD DIFFERENCE TABLE"<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<x[i];
        for(int j=0;j<n-i;j++)
        {
            cout<<y[i][j];
        }
        cout<<endl;
    }
    float p,z;
    p=(k-x[0])/2.0;
    z=y[0][0]+p*y[0][1]+p*(p-1.0)/2.0*y[0][2]+p*(p-1.0)*(p-2.0)/6*y[0][3];
    cout<<endl;
    cout<<"the value is = %f "<<z;
}
int main()
{
    int n;
    float k;
    cout<<"Enter the size of the table: "<<endl;
    cin>>n;
    cout<<"enter Which position you want to find "
   cin>>k;
    inter(n,k);
    return 0;
}