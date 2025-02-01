#include<bits/stdc++.h>
using namespace std;
#define F(x) (x*x-7)
void bisection(float a,float b)
{
    int i=0;
    float xr,xr_old=0.0,tol=0.005;
    float z=0;
    if(F(a)*F(b)>=0)
    {
        cout<<"Invalid interval [a, b]. The function must have different signs at a and b"<<endl;
        return;
    }
    cout<<"Iteration\t a\t b\t xr\t F(xr)\t   F(a)\t    F(b)  error "<<endl;
    cout<<"----------------------------------------------------------"<<endl;
    do
    {
        xr_old=xr;
        xr=(a + b)/2;
        float f=F(xr);
        float x=F(a);
        float y=F(b);
        z=fabs((xr-xr_old)/xr);
        cout<<i<<a<<b<<xr<<f<<x<<y<<z<<endl;

        if (F(xr)==0.0)
        {
            break;
        }
        else if(F(a)*F(xr)<0)
        {
            b=xr;
        }
        else
        {
            a=xr;
        }
        i++;
    }
    while(z>=tol);
    cout<<"Root is approximately = %.4f : "<<xr<<endl;
}
int main()
{
    float a, b;
    cout<<"Enter the value of interval [a, b]: "<<endl;
    cin>>a>>b;
    bisection(a, b);
    return 0;
}