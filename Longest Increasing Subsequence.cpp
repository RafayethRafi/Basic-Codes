#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define fraction() cout.unsetf(ios::floatfield); cout.precision(10); cout.setf(ios::fixed,ios::floatfield);

const int N = 25e2+10;
vector<int> a(N);
int dp[N];

int lis(int i)
{
    if(dp[i]!=-1) return dp[i];

    int ans = 1;
    for(int j=0;j<i;j++)
    {
        if(a[i]>a[j])
        {
            ans = max(ans,lis(j)+1);
        }
    }
    return dp[i] = ans;
}

int main()
{
    optimize();
    memset(dp,-1,sizeof(dp));

    int n,i;
    cin>>n;

    for(i=0;i<n;i++) cin>>a[i];

    int ans=0;
    for(i=0;i<n;i++)
    {
        ans = max(ans,lis(i));
    }

    cout<<ans<<endl;

    return 0;
}
