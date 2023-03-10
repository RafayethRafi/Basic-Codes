#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define fraction() cout.unsetf(ios::floatfield); cout.precision(10); cout.setf(ios::fixed,ios::floatfield);

const int N = 1e5+123;
int a[N];

void merge(int l,int r,int mid)
{
    int i;
    int l_sz = mid - l +1;
    int L[l_sz+1];
    int r_sz = r-mid;
    int R[r_sz+1];

    for(i=0;i<l_sz;i++) L[i] = a[i+l];
    for(i=0;i<r_sz;i++) R[i] = a[i+mid+1];

    int li=0, ri=0;
    L[l_sz] = R[r_sz] = INT_MAX;

    for(i=l;i<=r;i++)
    {
        if(L[li] <= R[ri])
        {
            a[i] = L[li];
            li++;
        }
        else
        {
            a[i] = R[ri];
            ri++;
        }
    }
}

void mergeSort(int l,int r)
{
    if(l==r) return;

    int mid = (l+r)>>1;

    mergeSort(l,mid);
    mergeSort(mid+1,r);

    merge(l,r,mid);
}

int main()
{
    optimize();
    int n,i;
    cin>>n;

    for(i=0;i<n;i++) cin>>a[i];

    mergeSort(0,n-1);

    for(i=0;i<n;i++) cout<<a[i]<<" ";
    return 0;
}
