#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define fraction() cout.unsetf(ios::floatfield); cout.precision(10); cout.setf(ios::fixed,ios::floatfield);

void printF(int idx, int n, int a[], vector<int> &ds)
{
    if(idx == n)
    {
        for(auto it : ds)
        cout<<it<<" ";

        if(ds.size() == 0) cout<<"{}";

        cout<<endl;

        return;
    }

    ds.push_back(a[idx]);
    printF(idx+1, n, a, ds);
    ds.pop_back();
    printF(idx+1, n, a, ds);
}

int main()
{
    optimize();
    int a[] = {3,2,1};
    int n = 3;
    vector<int> ds;

    printF(0,n,a,ds);

    return 0;
}
