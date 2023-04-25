#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define fraction() cout.unsetf(ios::floatfield); cout.precision(10); cout.setf(ios::fixed,ios::floatfield);

void printF(int idx, int n, int a[],int s, int k, vector<int> &ds)
{
    if(idx == n)
    {
        if(s == k)
        {
            for(auto it : ds)
            {
                cout<<it<<" ";
            }
            cout<<endl;
        }

        return;
    }

    ds.push_back(a[idx]);
    s += a[idx];

    printF(idx+1, n, a,s,k, ds);
    ds.pop_back();
    s -=  a[idx];
    
    printF(idx+1, n, a,s,k, ds);
}

int main()
{
    optimize();
    int a[] = {1,2,1};
    int n = 3;
    int k = 2;
    vector<int> ds;

    printF(0,n,a,0,k,ds);

    return 0;
}
