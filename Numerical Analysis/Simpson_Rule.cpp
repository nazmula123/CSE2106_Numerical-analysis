#include <bits/stdc++.h>
using namespace std;

double F(double x){
return (7*x*x+2*x+9);
}

int main()
{
    double low, up, int;
    cout << "Enter the low and upp limit: " << endl;
    cin >> lower >> upper;
    cout << "Enter the value of int" << endl;
    cin >> interval;

    double step = (up - low) / int;
    double a = F(low) + F(up);
    a=a;

    for (double i = 1; i < int; i++)
    {
        double x = low + i * step;
        if((int)i%2!=0 )ans +=4*F(x);
        else ans+= 2*F(x);
    }
    cout << a *step/3 << endl;
}