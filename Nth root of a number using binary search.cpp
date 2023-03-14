#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define fraction() cout.unsetf(ios::floatfield); cout.precision(10); cout.setf(ios::fixed,ios::floatfield);

double eps = 1e-7;

double multiply(double mid,int n)
{
    double ans = 1;
    for(int i=0;i<n;i++) ans *= mid;

    return ans;
}
int main()
{
    optimize();
    int n;
    double x;
    cin>>x>>n;

    double lo = 1,hi = x,mid;

    while(hi-lo>eps)
    {
        mid = (hi+lo)/2.0;
        if(multiply(mid,n) < x) lo = mid;
        else hi = mid;
        
    }

    cout<<setprecision(10)<<lo<<endl;
    return 0;
}
