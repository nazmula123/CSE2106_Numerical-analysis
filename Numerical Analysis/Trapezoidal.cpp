#include <bits/stdc++.h>
using namespace std;

   double F(double x){
    return x*x+7*x+2;
   }
int main()
{
    double lower, upper, interval;
    cout << "Enter the lower and upper limit: " << endl;
    cin >> lower >> upper;
    cout << "Enter the value of interval" << endl;
    cin >> interval;

    double step = (upper - lower) / interval;
    double ans = f(lower) + f(upper);
    ans = ans / 2;
    for (double i = 1; i < interval; i++)
    {
        double x = lower + i * step;
        ans+= f(x);
    }
    cout << ans * step << endl;
}