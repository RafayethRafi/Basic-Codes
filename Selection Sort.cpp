#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define fraction() cout.unsetf(ios::floatfield); cout.precision(10); cout.setf(ios::fixed,ios::floatfield);
int main()
{
    optimize();
    
    int n,i,j;
    cin>>n;
    int a[n];

    for(i=0;i<n;i++) cin>>a[i];

    for(i=0;i<n;i++)
    {
        int minIndex = i;
        for(j= i+1; j<n;j++)
        {
            if(a[j]<a[i]) minIndex = j;
        }

        swap(a[i],a[minIndex]);
    }

    for(i=0;i<n;i++) cout<<a[i]<<" ";
    cout<<endl;

    return 0;
}
